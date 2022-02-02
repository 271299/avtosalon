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
	void print()const {
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
void print_vector(const vector<car> c)
{
	cout << string(20, '-') << "\n";
	for (int i = 0; i < c.size(); i++)
	{
		
		c[i].print();
		cout << string(20, '-')<<"\n";
	}
}
int main()
{
	vector<car> c = { { "BMW", 2010, 3.5 , 15000 }, { "Audi", 2012, 2 , 13000 } };
	string name;
	int year;
	double price, engine;
    int choice;
    do {
		system("cls");
		print_vector(c);
        choice = menu();
        if (!choice)break;
        switch (choice)
        {
        case 1:
			cout << "Enter car : ";
			cin >> name;
			cout << "Enter year : ";
			cin >> year;
			cout << "Enter engine : ";
			cin >> engine;
			cout << "Enter price : ";
			cin >> price;
			c.push_back(car{ name, year, engine , price });
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        }
    } while (true);
	return 0;
}