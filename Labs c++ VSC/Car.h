#pragma once
#include<string>
using namespace std;

class Car
{
private:
	string maker;
	int modell;
	string color;
	static int count; // static s� att hela classen har tillg�ng till den(andra objekt kan f� samma information)
public:
	void setMaker(string m);
	string getMaker();
	void setModell(int m);
	int getModell();
	void setColor(string m);
	string getcolor();
	int GetCar_count();

	Car(string ma, int mo,string co); // Detta �r Overlaod constractur
	Car();//Detta �r defualt constractur
	~Car();

};

