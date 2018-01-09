#ifndef NETWORK_HPP
#define NETWORK_HPP
#include<iostream>
#include <list>

using namespace std;

class Ramp
{
private:
    int id;
    int deliveryInterval;  //jaka typ zmienna?
public:
    Ramp(int _id, int _di);
    void deliverGoods(int time);
    int getDeliveryInterval();
    int getId();
};

class Storehouse
{
private:
    int id;
    int packageDepot;    //o co chodzi lol
public:
    Storehouse(int _id);
    void receivePackage(int package);   //jak¹ zmienn¹ jest package?
    Package viewDepot();
    void getReceiverType();
    int getId();
};

class Factory
{
private:
    list<Ramp> ramps;
    list<Worker> workers;
    list<Storehouse> storehouses;
public:
    Ramp getRamps();  // co tu trzeba?
    void addRamps(Ramp r);
    void removeRamp(Ramp* r); //????

    Worker getWorkers();
    void addWorkers(Worker w);
    void removeWorker(Worker* w);

    Storehouse getStorehouses();
    void addStorehouses(storehouse s);
    void removeStorehouse(Storehouse* s);

    bool isConsistent(); // co wgl robi ta funkcja
};


#endif
