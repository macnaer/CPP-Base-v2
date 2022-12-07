#include <iostream>

using namespace std;

void main() {
	//int a = 200000000000;
	//cout << "Int type over range\t" << a << endl;
	//unsigned int b = 3000000000;
	//cout  << "unsigned int:\t" << b << endl;
	//cout  << "unsigned int max:\t" << UINT_MAX << endl;
	//cout << "Size of int:\t" << sizeof(int) << " Byte" << endl;
	//cout << "Int min value:\t" << INT_MIN << endl;
	//cout << "Int max value:\t" << INT_MAX << endl;
	//cout << "========================" << endl;


	//short s = 10;
	//cout << "Short " << s << endl;
	//unsigned short us = 40000;
	//cout << "unsigned short:\t" << us << endl;
	//cout << "unsigned short max:\t" << USHRT_MAX << endl;
	//cout << "Size of int:\t" << sizeof(short) << " Byte" << endl;
	//cout << "Int min value:\t" << SHRT_MIN << endl;
	//cout << "Int max value:\t" << SHRT_MAX << endl;
	//cout << "========================" << endl;
	//long l = 3000;
	//cout << "Long " << l << endl;
	//unsigned long int ul = 4000000000;
	//cout << "unsigned long:\t" << ul << endl;
	//cout << "unsigned long max:\t" << ULLONG_MAX << endl;
	//cout << "Size of long:\t" << sizeof(long int) << " Byte" << endl;
	//cout << "Int min value:\t" << LLONG_MIN << endl;
	//cout << "Int max value:\t" << LLONG_MAX << endl;
	//cout << "=========Float===========" << endl;
	//float pi = 3.14;
	//cout << "pi: " << pi << endl;
	//float fltTest = 1.123456789;
	//cout << "Result = " << fltTest << endl;

	//cout << "=========Double===========" << endl;
	//double d = 3.14;
	//cout << "pi: " << d << endl;
	//double dTest = 1.123456789;
	//cout << "Result = " << dTest << endl;
	//cout << "==============BOOL==============" << endl;

	//bool exit = false;
	/*exit = true;*/
	/*exit = 1;*/
	/*exit = 100500;*/
	/*exit = -100500;
	cout << "Exit => " << exit << endl;

	cout << "==============char=============" << endl;
	char str = 'H';
	cout << "Str => " << str << endl;

	char sayHello[6] = "Hello";
	cout << "Say hello " << sayHello << endl;*/

	//unsigned short age = 0;
	//cout << "Enter your age: " << endl;
	//cin >> age;
	//cout << "Age = " << age << endl;

	unsigned int s = 0;
	unsigned int fs = 86400;
	cout << "Enter how many seconds past at the moment today:" << endl;
	cin >> s;
	unsigned int m = s / 60;
	unsigned int h = m / 60;
	unsigned int nm = m - h * 60;
	unsigned int ns = s - nm * 60;
	cout << " Now :\t" << h << "\thours " << nm << "\t minutes " << ns << "\t seconds\n";

	system("pause");
}