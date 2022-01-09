/*
31. Дан массив из 10 чисел. Вывести минимальное и максимальное число в
массиве.
*/

#include<iostream>


int main(){
	int D[6];

	

	for (int i = 0; i < 6;i++) {
		std::cin >> D[i];
	}

	
	int max = D[0];


	for (int i = 1; i < 6;i++) {

		if (D[i] > max) {
			max = D[i];
		}

	}

	

	std::cout << max;

	return 0;
}