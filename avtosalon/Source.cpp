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
	string get_name()const
	{
		return name;
	}
	double get_price()const
	{
		return price;
	}
	double get_year()const
	{
		return year;
	}

};
bool operator<(const car& c, const car& c1)
{
	return c.get_price() < c1.get_price();
}
bool operator>(const car& c, const car& c1)
{
	return c.get_price() > c1.get_price();
}
int menu()
{
	int choice;
	cout << "0 - Exit\n";
	cout << "1 - Add car  !\n";
	cout << "2 - Delete car by brand !\n";
	cout << "3 - Print car by brand !\n";
	cout << "4 - Sort by price!\n";
	cout << "5 - Search car by year of manufacture !\n";
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
	vector<car> c = { { "BMW", 2010, 3.5 , 15000 }, { "Audi", 2012, 2 , 13000 },{ "BMW x3", 2012, 3.2 , 16000 }, { "Opel", 2010, 1.4 , 13000 } };
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
		{
			cout << "Enter car you want to delete :  ";
			cin >> name;
			auto it = find_if(c.begin(), c.end(), [name](const car& el)
				{
					return el.get_name() == name;
				});
			if (it != c.end()) {
				c.erase(it);
			}
			else
			{
				cout << "Not found ! "; system("pause");
			}
			
		}
            break;
		case 3: 
	    {
			cout << "Enter car you want to print :  ";
			cin >> name;
			auto it = find_if(c.begin(), c.end(), [name](const car& el)
				{
					return el.get_name() == name;
				});
			if (it != c.end()) {
				it->print();
			}
			else
			{
				cout << "Not found ! ";
			}
			system("pause");
	    }
            break;
        case 4:
			sort(c.begin(), c.end() , greater<car>());
            break;
        case 5:
		{
			cout << "Enter year of manufacture :  ";
			cin >> year;
			auto it = find_if(c.begin(), c.end(), [year](const car& el)
				{
					return el.get_year() == year;
				});
			if (it != c.end()) {
				it->print();
			}
			else
			{
				cout << "Not found ! ";
			}
			system("pause");
		}
            break;
        }
    } while (true);
	return 0;
}