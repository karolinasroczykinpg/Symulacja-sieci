#ifndef Product
#define Product


enum type
{
    storehouse,
    ramp,
    worker
};

class Product {
private:
	int ID;
public:
	Product( int _id );

	int getID()const;
};

#endif
