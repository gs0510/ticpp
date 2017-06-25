#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream in("FillVector.cpp");
	string line;

	while( getline(in, line) ) {
		cout << "Press Enter to Continue";
		cin.ignore();
		cout << line << endl;
	}

	return 0;
}