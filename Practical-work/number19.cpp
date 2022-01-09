
/*
19. В массиве Х(26) найти количество положительных элементов и сумму
отрицательных элементов.
*/

#include<iostream>


int main(){
	
	
	int X[26];

	double sum = 0;
	int iterator = 0;

	for (int i = 0; i < 10;i++) {
		std::cin >> X[i];
	}

	for (int i = 0; i < 26;i++) {
		if (X[i] > 0) {
			iterator++;
		}
		else {
			sum += X[i];
		}
	}

	

	std::cout <<"Количество положительных"<<iterator;
	std::cout << "Сумма отрицательных" << sum;

	return 0;
}