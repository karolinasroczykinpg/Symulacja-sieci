#include <receiver.h>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iostream>

void Storehouse::receiveProduct(Product* product)
{
    ListOfProducts.push_back(product);
}

std::string Storehouse::showProductList()
{
    std::stringstream plist;

    for (auto i : ListOfProducts)
    {
        plist << i->id << " ";
    }

    return plist.str();
}


