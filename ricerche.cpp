// Search.cpp : Dimostrazione algoritmo di ricerca base e dicotomica
//
#include <iostream>
using namespace std;

#define N 6
int a[N];
int i = 0;
int x;
int I;

void search() {

	for (i = 0; i < N; i++) {
		if (x == a[i]) {
			cout << "here the element: " << a[i];
		}
	}
}

void bubbleSord() {

	for (int j = 0; j < N - 1; j++) {

		for (i = 0; i < N - 1; i++) {

			if (a[i] > a[i + 1]) {

				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}

	}

	cout << "bubble sort:";
	for (i = 0; i < N; i++) {

		cout << " " << a[i];
	}

}

int dichotomy() {

	bubbleSord();

	cout << endl;

	int i_min = 0;
	int i_max = N - 1;
	bool trovato = false;

	while ((trovato == false) and (i_min <= i_max)) {

		I = int((i_min + i_max) / 2);

		if (a[I] == x) {
			trovato = true;
		}
		else {
			if (x < a[I]) {

				i_min = I + 1;
			}
			else {

				i_max = I - 1;
			}
		}
	};

	return a[I];
}

int main() {

	cout << "insert the elements: " << endl;
	for (i = 0; i < N; i++) {

		cin >> a[i];
	}

	cout << endl;

	cout << "insert the element to search: " << endl;
	cin >> x;

	cout << endl;

	search();

	cout << endl;

	if (dichotomy()) {
		cout << "here's the element with dichotomy search: " << a[I];
	}
	else {
		cout << "element not found.";
	}

	cout << endl;

	return 0;
}

