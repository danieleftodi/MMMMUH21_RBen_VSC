#include "Car.h"
#include<iostream>

using namespace std;

Car::Car(string ma, int mo, string co):maker(ma), modell (mo), color (co)
{
	
	/*maker = "honda";
	modell = 2019;
	color = "red";*/
}

Car::~Car()
{
	cout<<"hej med dig"<< endl;

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

void Car::setColor(string m)
{
	color = m;
}

string Car::getcolor()
{
	return color;
}
