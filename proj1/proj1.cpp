#include <iostream>
#include <time.h>

using namespace std;


int* Prostch(int ms[], int size) {

	int* nAr1 = new int[size];

	int count1 = 0, count2 = 0;

	for (int i = 0; i < size; i++) {

		for (int j = 1; j <= i; j++) {

			if (ms[i] % j == 0) { count1 += 1; }

		}
		
		if (count1 <= 2) {

			nAr1[i] = ms[i];

			count2 += 1;
		}

	}

	int* nAr2 = new int[count2];

	for (int i = 0; i < count2; i++) {

		nAr2[i] = nAr1[i];

		cout << nAr2[i] << ' ';

	}

	cout << endl;

	delete[] nAr1;

	return  nAr2;

}

int* Parni(int ms[], int size) {

	int* nAr1 = new int[size];

	int count1 = 0, count2 = 0;

	for (int i = 0; i < size; i++) {

		if (ms[i] % 2 == 0) {

			count2 += 1;
			nAr1[i] = ms[i];

		}

	}

	int* nAr2 = new int[count2];

	cout << endl;

	for (int i = 0; i < count2; i++) {

		nAr2[i] = nAr1[i];
		
		cout << nAr2[i] << ' ';

	}

	cout << endl;

	delete[] nAr1;


	return nAr2;

}


int* Krattri(int ms[], int size) {

	int* nAr1 = new int[size];

	int count1 = 0, count2 = 0;

	for (int i = 0; i < size; i++) {

		if (ms[i] % 3 == 0) {

			count2 += 1;
			nAr1[i] = ms[i];

		}

	}

	int* nAr2 = new int[count2];

	for (int i = 0; i < count2; i++) {

		nAr2[i] = nAr1[i];

		cout << nAr2[i] << ' ';

	}

	cout << endl;

	delete[] nAr1;

	return nAr2;

}

void InitAr(int ms[], int size) {

	for (int i = 0; i < size; i++) {

		ms[i] = rand() % 100;

	}

}

void PrintAr(int ms[], int size) {

	cout << "Array: ";

	for (int i = 0; i < size; i++) {

		cout << ms[i] << ' ';

	}

	cout << endl << endl;

}

int main() {

	srand(time(0));

	const int size = 10;

	int ans;

	int* Array = new int[size];

	InitAr(Array, size);

	PrintAr(Array, size);

	cout << "What you wanna know?\n";
	cout << "1. Simple numers in array.\n";
	cout << "2. Numbers that multiples by 3.\n";
	cout << "3. Numbers that can be divided by 2.\n";

	cout << "Your answer: ";

	cin >> ans;

	switch (ans) {

	case 1:Prostch(Array, size); break;

	case 2:Krattri(Array, size); break;

	case 3:Parni(Array, size); break;

	default:cout << "incorect choice.." << endl; break;

	}

	return 0;

}