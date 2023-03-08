#include <iostream>

using namespace std;

void main() {

	//char str = 'H';
	//char strArr[6] = {'H', 'e', 'l', 'l', 'o'};

	//char* strDynamic = new char;

	//cout << "Enter word: " << endl;
	//cin >> strDynamic;

	//cout << "strDynamic " << strDynamic << endl;

	// Structure


	struct Person {
		string Name;
		string Surname;
		unsigned short Age;

		void Print() {
			cout << "Name: " << Name << endl;
			cout << "Surname: " << Surname << endl;
			cout << "Age: " << Age << endl;
		}
	};

	Person bill;
	bill.Name = "Bill";
	bill.Surname = "Gates";
	bill.Age = 58;
	//bill.Print();


	Person stive;
	stive.Name = "Stiven";
	stive.Surname = "Balmor";
	stive.Age = 54;
	//stive.Print();


	const int SIZE = 2;
	Person arr[SIZE];
	arr[0] = bill;
	arr[1] = stive;

	cout << "Person array size: " << sizeof(arr) << endl;;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i].Print();
	}

}