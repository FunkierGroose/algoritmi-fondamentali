
// File.cpp : Uso apertura, lettura e scrittura di un file di testo
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void file() {

	string  name;
	string text;

	cout << ":: nome file->";
	cin >> name;
	cout << endl;
	cout << ":: scrivi qui sotto->" << endl;
	cin >> text;

	ofstream mioFile("testi/" + name + ".txt");

	mioFile << text;

	cout << endl;

	cout << ":: file scritto, controllare nella cartella-> testi/" << endl;
	mioFile.close();
}


int main() {

	cout << "@ Edit Pier @" << endl;
	cout << endl;

	file();

	return 0;
}

