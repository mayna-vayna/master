/*
14. Дан массив натуральных чисел размера 5. Написать программу, выводящую
сначала четные, а затем нечетные элементы массива
*/

#include<iostream>


int main(){
	int D[5];

	

	for (int i = 0; i < 5;i++) {
		std::cin >> D[i];
	}

	


	for (int i = 0; i < 5;i++) {

		if (D[i]%2==0) {
			std::cout << D[i]<<" ";
		}

	}

	std::cout << std::endl;

	for (int i = 0; i < 5;i++) {

		if (D[i] % 2 == 1) {
			std::cout << D[i] << " ";
		}

	}


	return 0;
}