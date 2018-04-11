#include<iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void LlenarArray(int *arr, int tam) {
	srand(time(NULL));
	for (int i = 0; i<tam; i++) {
		int temporal = rand() % 999999;
		*(arr + i) = temporal;
	}
}

void printArr(int *arr, int tam) {
	for (int i = 0; i<tam; i++) {
		if (i<tam - 1) {
			cout << *(arr + i) << ", ";
		}
		else {
			cout << *(arr + i) << ".";
		}
	}
}

class Descendente {
public:
	inline bool operator()(int a, int b) {
		return a>b;
	}
};
class Ascendente {
public:
	inline bool operator()(int a, int b) {
		return a<b;
	}
};

template <class T>
class Selection {
private:
	T orden;
public:
	void SelectionSort(int *arr, int tam) {
		for (int i = 0; i < tam - 1; i++) {
			int iMin = i;
			for (int j = i + 1; j < tam; j++) {
				if (orden(*(arr + j), *(arr + iMin))) {
					iMin = j;
				}
			}
			int temp = *(arr + i);
			*(arr + i) = *(arr + iMin);
			*(arr + iMin) = temp;
		}
	}
};


int main() {
	int tam;
	int *arr;
	//printArr(arr, tam);
	float inicio, fin, t;
	int tamanios[4] = { 25000,50000,75000,100000 };
	for (int i = 0; i < 4; i++) {
		tam = tamanios[i];
		arr = new int[tam];
		LlenarArray(arr, tam);
		Selection<Descendente> Temporal;

		inicio = clock();

		Temporal.SelectionSort(arr, tam);

		fin = clock();
		t = fin - inicio;
		printf("\nEl tiempo de proseso es: %f", t / CLOCKS_PER_SEC);
		printf("\n");
		//printArr(arr, tam);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}