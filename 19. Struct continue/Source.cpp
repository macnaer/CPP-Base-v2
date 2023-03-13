#include <iostream>

using namespace std;

struct Player {
private:
	string name;
	string surname;
	int age;
	unsigned int salary;
	unsigned int price;
	unsigned int score;

public:
	void Print() {
		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age
			<< "\nSalary: " << salary << "\nPrice: " << price << "\nScore: " << score << endl;
	}

	void Create() {
		cout << "Name: ";
		cin >> name;
		cout << "Surname: ";
		cin >> surname;
		cout << "Age: ";
		cin >> age;
		cout << "Salary: ";
		cin >> salary;
		cout << "Price: ";
		cin >> price;
		cout << "Score: ";
		cin >> score;
	}
};

struct Team
{
private:
	string name;
	string country;
	unsigned int teamSize = 0;
	Player* players;

public:

	void Create() {
		cout << "Team name: ";
		cin >> name;
		cout << "Country: ";
		cin >> country;
		cout << "Team size: ";
		cin >> teamSize;
		players = new Player[teamSize];

		for (int i = 0; i < teamSize; i++) {
			players[i].Create();
		}

		system("cls");
	}

	void Print() {
		cout << name << " : " << country << endl;

		for (int i = 0; i < teamSize; i++) {
			players[i].Print();
		}
	}
};

void main() {

	//Player mudruk;
	//mudruk.Create();
	//mudruk.Print();

	Team chelsea;
	chelsea.Create();
	chelsea.Print();




}