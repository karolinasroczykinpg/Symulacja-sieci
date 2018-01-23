#ifndef FACTORY_
#define FACTORY_

#include <vector>
#include <string>
#include <sender.hpp>
#include <receiver.h>
#include <product.h>


class Factory
{
private:
    std::list<Ramp> ramps;
    std::list<Worker> worker;
    std::list<Storehouse> storehouses;

    void addRamp(Ramp*)
    void addWorker(Worker*);
    void adStorehouse(Storehouse*);
    void deleteRamp(Ramp*)
    void deleteWorker(Worker*);
    void deleteStorehouse(Storehouse*);

};


#endif // FACTORY_
