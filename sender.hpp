#ifndef PRODUCT_SENDER
#define PRODUCT_SENDER

#include<factory.h>
#include <vector>
#include<map>
#include <string>
#include <receiver.h> //tutaj nazwa drugiego
#include <product.h>

class ProductSender
{
    private:
        int duration;
        std::vector<pair<Receiver*,probability>> connections;

    public:
        nodeType type;

        ProductSender(int _duration) : duration(_duration) {};
        void setProbability(Receiver*,double);
        void sendProduct(Product*);
        int getDuration() {return duration;};
        bool hasProducts();

        void setPreferences(std::map<Receiver*, double>);
        std::map<Receiver*, double> getPreferences();
        void addReceiver(Receiver*,double);
        void removeReceiver(Receiver *);

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

class Ramp : public ProductSender
{
    public:
        int id;

        Ramp(int _id, int _duration) : id(_id), ProductSender(_duration) {type = Ramp;};
        virtual void nextRound(int) override;

    private:
        void setType() {type=loadingramp;};

};


#endif // PRODUCT_SENDER
