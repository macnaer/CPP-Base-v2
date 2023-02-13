#include <iostream>

using namespace std;

// Prototypes
template <typename T>
void Print(T arr[], const int SIZE);

template <typename T>
void Fill(T arr[], const int SIZE, char type = 'i');

void Fill(int arr[], const int SIZE);
void Fill(double arr[], const int SIZE);
void Fill(char arr[], const int SIZE);

void main() {
	srand((unsigned)time(NULL));
	const int SIZE_10 = 10;
	const int SIZE_7 = 7;
	const int SIZE_5 = 5;

	int arr_int[SIZE_10];
	double arr_double[SIZE_7];
	char arr_char[SIZE_5] = { 'a', 'b', 'c', 'd', 'e' };

	// arr_int 
	Fill(arr_int, SIZE_10);
	Print(arr_int, SIZE_10);
	// arr_int 
	cout << "=============================" << endl;
	// arr_double
	Fill(arr_double, SIZE_7);
	Print(arr_double, SIZE_7);
	// arr_double
	cout << "=============================" << endl;
	// arr_char
	Fill(arr_char, SIZE_5);
	Print(arr_char, SIZE_5);
	// arr_char
}


void Fill(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = -12 + rand() % 32;
	}
}

void Fill(double arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = -120 + rand() % 320;
		arr[i] /= 10;
	}
}

void Fill(char arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = char(97 + rand() % 25);
	}
}

template <typename T>
void Fill(T arr[], const int SIZE, char type) {

	if (type == 'i') {
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = -12 + rand() % 32;
		}
	}
	else if(type == 'd') {
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = -120 + rand() % 320;
			arr[i] /= 10;
		}
	}
	else if(type == 'c') {
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = char(97 + rand() % 25);
		}
	}
	else {
		cout << "Unknown type." <<endl;
	}
}

template <typename T>
void Print(T arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}