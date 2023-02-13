#include <iostream>

using namespace std;

// Prototype
template <typename T>
T Plus(T a, T b);

template <typename T1, typename T2>
T1 Plus(T1 a, T2 b);


void main() {

	cout << Plus(4, 8) << endl;
	cout << Plus(4.5, 8.1) << endl;
	cout << Plus(5.1, 10) << endl;
}

template <typename T>
T Plus(T a, T b) {
	return a + b;
}

template <typename T1, typename T2>
T1 Plus(T1 a, T2 b) {
	return a + b;
}
