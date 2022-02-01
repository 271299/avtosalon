#include <iostream>
#include <vector>
#include <string>
using namespace std;

class car {
	string name;
	int year;
	double engine;
	double price;
public:
	car()
	{
		this->name = " ";
		this->year = 0;
		this->engine = 0;
		this->price = 0;
	}
	car(string name, int year, double engine, double price)
	{
		this->name = name;
		this->year = year;
		this->engine = engine;
		this->price = price;
	}
	void print() {
		cout << "Car : " << name << "\n";
		cout << "Year : " << year << "\n";
		cout << "Engine : " << engine << "\n";
		cout << "Price : " << price << "\n";
	}
};
int main()
{
	return 0;
}