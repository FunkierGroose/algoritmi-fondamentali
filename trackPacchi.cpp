// trackPacchi.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include<string>

using namespace std;

struct orders {
	string titolo;
	string numeroOrd;
	string dataConsegna;
	string indirizzo;
	string cliente;
};

int sceltaOperazione;
int sceltaInserimento;

int main()
{
	struct orders ordine; //variabile

	cout << "Programma di tracciamento del prodotto" << endl;
	cout << endl;

	cout << "1 :: traccia il pacco che hai ordinato" << endl;
	cout << "2 :: ordina un nuovo prodotto" << endl;
	cin >> sceltaOperazione;

	switch (sceltaOperazione) {
	case 1:
		system("cls");
		cout << "benvenuto nel sistema di tracciamento" << endl;

		break;

	case 2:
		system("cls");
		cout << "benvenuto nel sistema di ordinazione di un nuovo ordine" << endl;
		cout << endl;
		do {
			cout << ":: inserire i dati" << endl;

			cout << ":: titolo" << endl;
			cin >> ordine.titolo;
			cout << ":: numero ordine" << endl;
			cin >> ordine.numeroOrd;
			cout << ":: data consegna" << endl;
			cin >> ordine.dataConsegna;
			cout << ":: indirizzo" << endl;
			cin >> ordine.indirizzo;
			cout << ":: cliente" << endl;
			cin >> ordine.cliente;

			cout << endl;

			cout << ":: ordine confermato!" << endl;
			cout << endl;
			cout << "cliente -> " << ordine.cliente << endl;
			cout << "titolo -> " << ordine.titolo << endl;
			cout << "numero ordine -> " << ordine.numeroOrd << endl;
			cout << "indirizzo -> " << ordine.indirizzo << endl;
			cout << "data consegna -> " << ordine.dataConsegna << endl;

			cout << ":: inserire nuovi dati? (1 - si, 2 - no)" << endl;
			cin >> sceltaInserimento;

			system("cls");
		} while (sceltaInserimento == 1);

		break;
	}

	system("pause");
	return 0;
}


