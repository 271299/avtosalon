#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
int menu()
{
	int choice;
	cout << "0 - Exit\n";
	cout << "1 - Add car  !\n";
	cout << "2 - Delete car !\n";
	cout << "3 - Print car!\n";
	cout << "4 - Sort !\n";
	cout << "5 - Search !\n";
	cout << "Enter your chioce!\n";
	cin >> choice;
	return choice;
}
int main()
{
	vector<car> c = { { "BMW", 2010, 3.5 , 15000 }, { "Audi", 2012, 2 , 13000 } };
	c.push_back(car{ "Opel", 2008, 1.2 , 8000 });

	return 0;
}