#include <iostream>
#include <time.h>

using namespace std;


int* Prostch(int* ms[], int size) {

	int* nAr1 = new int[size];

	int count1 = 0, count2 = 0;

	for (int i = 0; i < size; i++) {

		for (int j = 1; j <= i; j++) {

			if (*ms[i] % j == 0) { count1 += 1; }

		}
		
		if (count1 <= 2) {

			nAr1[i] = *ms[i];

			count2 += 1;
		}

	}

	int* nAr2 = new int[count2];

	for (int i = 0; i < count2; i++) {

		nAr2[i] = nAr1[i];

	}

	delete[] nAr1;

	return nAr2;

}

int* Parni(int* ms[], int size) {

	int* nAr1 = new int[size];

	int count1 = 0, count2 = 0;

	for (int i = 0; i < size; i++) {

		if (*ms[i] % 2 == 0) {

			count2 += 1;
			nAr1[i] = *ms[i];

		}

	}

	int* nAr2 = new int[count2];

	for (int i = 0; i < count2; i++) {

		nAr2[i] = nAr1[i];

	}

	delete[] nAr1;

	return nAr2;

}
