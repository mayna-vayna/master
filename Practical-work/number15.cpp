/*
15. Дан массив D (10). Вычислить разницу между максимальным и
минимальным элементами массива.
*/

#include<iostream>


int main(){
	int D[10];

	

	for (int i = 0; i < 10;i++) {
		std::cin >> D[i];
	}

	int min = D[0];
	int max = D[0];

	for (int i = 1; i < 10;i++) {

		if (D[i] < min) {
			min = D[i];
		}

	}


	for (int i = 1; i < 10;i++) {

		if (D[i] > max) {
			max = D[i];
		}

	}

	

	std::cout << max - min;

	return 0;
}