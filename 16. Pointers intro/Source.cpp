#include <iostream>

using namespace std;

void Counter(int *b) {
	cout << "Inside counter b value: " << *b << " b address: " << b << endl;
	(*b)++;
	/**b = *b + 1;*/
}

void Fill(int pArr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		pArr[i] = i;
	}
}

void Print(int pArr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << pArr[i] << endl;
	}
}

void main() {

	//int a = 5;
	///*cout << "a value: " << a << " a address: " << &a << endl;*/

	//int* p = nullptr;

	//
	///*b = &a;*/
	//p = &a;
	///*cout << "b value: " << *b << " b address: " << &b << endl;*/

	//Counter(p);
	//cout << "b value: " << *p << " b address: " << p << endl;

	//int b = 10;
	//double c = 4.5;
	//void* pB = nullptr;

	//pB = &b;
	//cout << "Value: " << &pB << endl;

	//pB = &c;
	//cout << "Value: " << &pB << endl;

	const int SIZE = 10;
	int arr[SIZE];
	cout << "Before arr address " << arr << endl;

	int* pArr = nullptr;
	pArr = &arr[0];
	Fill(pArr, SIZE);
	Print(pArr, SIZE);
}