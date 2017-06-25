#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream in("CountWords.cpp");
	string word;
	int count = 0; 
	
	while(in >> word)
		count++;
	
	cout << count << endl;

	return 0;
}