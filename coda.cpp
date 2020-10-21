// queue.cpp : implementazioni dell'algoritmo di una queue di interi

#include <iostream>
using namespace std;

/*statements*/
int queue[6], n = 6, entra = -1, esce = -1;

/*function*/
void Insert() {

	int val;

	if (esce == n - 1) {
		cout << ":: Coda piena" << endl;
	}
	else {

		if (entra == -1)
			entra = 0;
		cout << ":: Elemento da aggiunger-> " << endl;
		cin >> val;
		esce++;
		queue[esce] = val;
	}
}

void Delete() {

	if (entra == -1 || entra > esce) {

		cout << ":: Coda vuota ";
		return;
	}
	else {

		cout << ":: Elemento eliminato-> " << queue[entra] << endl;
		entra++;
	}
}

void Display() {

	if (entra == -1) {
		cout << ":: Coda vuota!" << endl;
	}
	else {

		cout << ":: Coda: ";

		for (int i = entra; i <= esce; i++) {
			cout << queue[i] << " ";
		}
		cout << endl;
	}
}

/*main*/
int main() {

	int scelta;

	cout << "1:: Inserire l'elemento nella coda" << endl;
	cout << "2:: Eliminare l'elemento dalla coda" << endl;
	cout << "3:: mostrare la coda" << endl;
	cout << "4:: Esci" << endl;
	cout << endl;

	do {
		cout << ":: Scelta->";
		cin >> scelta;

		switch (scelta) {

		case 1: Insert();
			break;
		case 2: Delete();
			break;
		case 3: Display();
			break;
		case 4: cout << ":: Sto uscendo..." << endl;
			break;
		default: cout << ":: Scelta invalida!!" << endl;
		}

	} while (scelta != 4);

	return 0;
}
