#pragma once
#include<string>
using namespace std;

class Car
{
private:
	string maker;
	int modell;
	string color;
public:
	void setMaker(string m);
	string getMaker();
	void setModell(int m);
	int getModell();
	void setColor(string m);
	string getcolor();

	Car(string ma, int mo,string co);
	~Car();


	//Detta är defualt constractur
	/*Car();
	~Car();*/

};

