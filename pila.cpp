// stackWithoutPointer.cpp : algoritmo di uno stack di inter senza puntatore

#include <iostream>
using namespace std;
/*

*/
const int n = 5;
int stack[n];
int indice = -1;

/*funzioni*/
void push(int val) {

	if (indice >= n - 1) {   //nota: 5 - 1 = 4. il vettore conta anche la posizione 0. quindi 0 1 2 3 4 [n = 5]
		cout << ":: stack pieno!" << endl;
	}
	else {
		indice++;
		stack[indice] = val;
	}
}

void pop() {
	if (indice <= -1) {
		cout << ":: stack vuoto!" << endl;
	}
	else {
		cout << ":: l'elemento che è uscito è  " << stack[top] << endl;
		indice--;
	}
}

void display() {
	if (indice >= 0) {
		cout << ":: ecco gli elementi:";
		for (int i = indice; i >= 0; i--) {
			cout << stack[i] << " ";
		}
		cout << endl;
	}
	else
		cout << ":: stack vuoto, riprovare!";
}

int main() {

	int ch, val;
	cout << "1:: inserisci in stack" << endl;
	cout << "2:: togli dallo stack" << endl;
	cout << "3:: stampa lo stack" << endl;
	cout << "4:: Esci" << endl;
	cout << endl;
	do {

		cout << ":: scelta-> ";
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << ":: inserisci elemento->";
			cin >> val;
			push(val);
			break;
		}
		case 2: {
			pop();
			break;
		}
		case 3: {
			display();
			break;
		}
		case 4: {
			cout << ":: esco..." << endl;
			break;
		}
		default: {
			cout << ":: scelta invalida, riprova!" << endl;
		}
		}
	} while (ch != 4);

	return 0;
}
