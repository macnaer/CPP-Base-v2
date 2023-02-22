#include <iostream>

using namespace std;

void Counter(int *b) {
	cout << "Inside counter b value: " << *b << " b address: " << b << endl;
	(*b)++;
	/**b = *b + 1;*/
}

void main() {

	int a = 5;
	/*cout << "a value: " << a << " a address: " << &a << endl;*/

	int* b;
	
	/*b = &a;*/
	b = &a;
	/*cout << "b value: " << *b << " b address: " << &b << endl;*/

	Counter(b);
	cout << "b value: " << *b << " b address: " << b << endl;

}