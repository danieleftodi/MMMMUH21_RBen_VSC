#include "Car.h"

Car::Car()
{
}

Car::~Car()
{
}

void Car::setMaker(string m)
{
	maker = m;
}

string Car::getMaker()
{
	return maker;

}

void Car::setModell(int m)
{
	modell = m;
}

int Car::getModell()
{
	return modell;
}
