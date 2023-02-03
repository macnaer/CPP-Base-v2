#include <iostream>

using namespace std;

//void Hello() {
//	cout << "Hello! " << endl;
//}


//void Plus(int a, int b) {
//	int result = a + b;
//	cout << "Result Value: " << result << " Result size: " 
//		<< sizeof(result) << " Result address: " << &result << endl;
//}

int Plus(int a, int b) {
	int result = a + b;
	/*cout << "Plus Result address " << &result << endl;*/
	return result;
	// Error
}


char Compare(int a, int b) {
	char result;
	if (a > b) {
		result = '>';
	}
	else if (a < b) {
		result = '<';
	}
	else {
		result = '=';
	}

	return result;
}

void main() {

	/*Hello();*/
	/*Plus(5, 10);*/
	/*int result = 0;
	result = Plus(3, 5);

	cout << "Result Value: " << result << " Result size: "
				<< sizeof(result) << " Result address: " << &result << endl;*/

	int a = 0, b = 0;
	char sign;

	cout << "Enter first digit: ";
	cin >> a;

	cout << "Enter second digit: ";
	cin >> b;

	sign = Compare(a, b);
	cout << "A " << sign << " B" << endl;
}

