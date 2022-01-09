
/*
28. Дан массив целых чисел. Написать программу вычисляющую среднее
арифметическое ненулевых элементов массива
*/

#include<iostream>


int main(){
	int X[10];

	double average = 0;
	int iterator=0;

	for (int i = 0; i < 10;i++) {
		std::cin >> X[i];
	}

	for (int i = 0; i < 10;i++) {
		if (X[i] != 0) {
			average += X[i];
			iterator++;
		}
	}

	average /= iterator;

	std::cout << average;


	return 0;
}