
/*
23. Найти среднее арифметическое элементов массива Х(10), имеющих четный
индекс.
*/

#include<iostream>

int main(){
	
	
	int X[10];

	double average = 0;
	int iterator = 0;

	for (int i = 0; i < 10;i++) {
		std::cin >> X[i];
	}

	for (int i = 0; i < 10;i+=2) {
		average += X[i];
		iterator++;
	}

	average /= iterator;

	std::cout << average;

	return 0;
}