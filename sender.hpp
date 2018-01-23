#ifndef PRODUCT_SENDER
#define PRODUCT_SENDER

#include <vector>
#include <string>
#include <receiver.h> //tutaj nazwa drugiego

class ProductSender
{
    private:
        int duration;
        std::vector<pair<Receiver,probability>> connections;

    public:
        nodeType type;

        ProductSender(int _duration) : duration(_duration) {};
        void setProbability(Receiver);
        void sendProduct(Product*);

        int getDuration() {return duration;};
        bool hasProducts();

};

class Worker : public ProductReceiver, public ProductSender
{
    public:
        int id;

        Worker(int _id, int _duration, Storage* _storage) : id(_id), ProductSender(_duration), storage(_storage) {};
        //receiver
        void receiveProduct(Product*) override;
        int getId() override {return id;};
        //sender
        int getDuration();

    private:
        Storage* storage;
        void setType() {type=worker;};

};

class LoadingRamp : public ProductSender
{
    public:
        int id;

        LoadingRamp(int _id, int _duration) : id(_id), ProductSender(_duration) {type = loadingRamp;};
        virtual void nextRound(int) override;

    private:
        void setType() {type=loadingramp;};

};


#endif // PRODUCT_SENDER
