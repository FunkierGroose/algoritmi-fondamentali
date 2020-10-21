
#include<iostream>
using namespace std;

#define N 6

int i, j, min, temp, k;
int ordinato;
int a[N];

void selectionSord() {

	for (i = 0; i < N - 1; i++)
	{
		min = i;
		for (j = i + 1; j < N; j++) {

			if (a[j] < a[min]) {

				min = j;
			}
		}

		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}

	cout << "selection sort: ";
	for (i = 0; i < N; i++) {

		cout << " " << a[i];
	}
}

void bubbleSord() {

	for (j = 0; j < N - 1; j++) {

		for (i = 0; i < N - 1; i++) {

			if (a[i] > a[i + 1]) {

				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}

	}

	cout << "bubble sort: ";
	for (i = 0; i < N; i++) {

		cout << " " << a[i];
	}

}

void insertionSort() {

	cout << "Insertion sort: ";
	for (i = 0; i < N; i++) {
		cout << " " << a[i];
	}


	for (i = 0; i < N; i++) {

		int j = 0;

		while (a[i] < a[j]) {	//posizionamento dell'indice sulla cella da scambiare
			j++;
		}

		ordinato = a[i];

		for (k = i - 1; k > j; j++) {

			a[k + 1] = a[k];
		}

		a[k] = ordinato;

	}
}

int main()
{
	cout << "Inserisci gli elementi:\n";
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}

	cout << endl;

	selectionSord();

	cout << endl;

	bubbleSord();

	cout << endl;

	insertionSort();

	cout << endl;

	return 0;
}
