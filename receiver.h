#ifndef Network
#define Network

#include<factory.h>
#include <vector>
#include <string>
#include <product.h>

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
        int ID;

        Storehouse(int _id) : ID(_id);

<<<<<<< HEAD
        virtual void receiveProduct(Product*) override;
        virtual std::string showProductList(void) override;
        virtual int getID() override {return ID;};
=======
        void receiveProduct(Product*) override;
        std::string showProductList(void) override;
        int getID() override {return id;};
>>>>>>> bc5b15200d9f198e456d1a0239a856e9bfca56ca
};

#endif
