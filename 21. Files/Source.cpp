#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void main() {

	/*string path = "lib/db.txt";*/
	//ofstream writeFile;
	//string text;
	//============Write to file==============
	//writeFile.open(path, ofstream::app);
	//if (!writeFile.is_open()) {
	//	cout << "Can't open file!" << endl;
	//}
	//else {
	//	cout << "Enter your text: ";
	//	getline(cin, text);
	//	//cin >> text;
	//	writeFile << text << endl;
	//}
	//writeFile.close();
	//============Read from file==============
	string path = "lib/db.txt";
	ifstream readFile;
	string arr[4];
	int i = 0, j = 0;
	string data;

	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		cout << "Opened!" << endl;
		while (!readFile.eof())
		{
			getline(readFile, data);
			for (int i = 0; i < data.length(); i++)
			{
				if ((int)data[i] != 124)
				{
					arr[j] += data[i];
				}
				else
				{
					j++;
				}
			}
		}
		readFile.close();

		for (int i = 0; i < 4; i++) {
			cout << arr[i] << " " << endl;
		}
	}
	

	
}