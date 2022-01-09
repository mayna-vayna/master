/*
25. Дан массив из 10 чисел M(10). Вывести сначала нечетные, а затем четные
элементы массива.
*/

#include<iostream>


int main(){

	int M[10];

	

	for (int i = 0; i < 10;i++) {
		std::cin >> M[i];
	}



	for(int i = 0; i < 10;i++) {

		if (M[i] % 2 == 1) {
			std::cout << M[i] << " ";
		}

	}

   std::cout << std::endl;
	
	for (int i = 0; i < 10;i++) {

		if (M[i]%2==0) {
			std::cout << M[i]<<" ";
		}

	}
	return 0;
}