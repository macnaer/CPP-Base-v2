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

void main() {

	/*Hello();*/
	/*Plus(5, 10);*/
	int result = 0;
	result = Plus(3, 5);

	cout << "Result Value: " << result << " Result size: "
				<< sizeof(result) << " Result address: " << &result << endl;
}

