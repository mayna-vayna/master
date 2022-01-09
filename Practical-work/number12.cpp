
/*
11. Дан массив чисел. Найти минимальный и максимальный элемент
*/

#include<iostream>


int main(){
	int X[10];

	

	for (int i = 0; i < 10;i++) {
		std::cin >> X[i];
	}

	int min = X[0];
	int max = X[0];

	for (int i = 1; i < 10;i++) {

		if (X[i] < min) {
			min = X[i];
		}

	}


	for (int i = 1; i < 10;i++) {

		if (X[i] > max) {
			max = X[i];
		}

	}

	std::cout << min << std::endl << max;

	return 0;
}