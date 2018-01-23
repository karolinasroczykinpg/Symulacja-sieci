
#ifndef Queue
#define Queue

#include <vector>
#include <string>
#include <product.h>

class ProductQueue : public IProductQueue{

     std::deque<Product> deque ;
     QueueType productQueueType;
     std:function<Product()> popFunction;

 public:

    void push(Product);
    Product pop();
    Product[] view();
    QueueType getQueueType();
    bool isEmpty();
    int size();

};

class IProductQueue: public IProductDepot{
 public:

    virtual Product pop();
    virtual QueueType getQueueType();

};

class IProductDepot{
 public:
     virtual void push(Product);
     virtual bool empty();
     virtual int size();
     virtual Package[] view();
};
