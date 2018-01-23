#ifndef Network
#define Network

#include <vector>
#include <string>
#include <sender.hpp>

class ProductReceiver
{
    public:

        virtual void receiveProduct(Product*) = 0;
        virtual std::string showProductList(void) = 0;
        virtual int getID() = 0;

};

class Storehouse : public ProductReceiver
{
    private:
        std::vector<Product*> ListOfProducts;
    public:
        int id;

        Storehouse(int _id) : id(_id);

        virtual void receiveProduct(Product*) override;
        virtual std::string showProductList(void) override;
        virtual int getID() override {return id;};
};

#endif
