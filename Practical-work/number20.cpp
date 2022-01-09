
/*
20. Заданы длины трех сторон треугольника a, b, c. Определить, является ли
треугольник равнобедренным, равносторонним или разносторонним.
Привести алгоритм и код программы.
*/

#include<iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main(){
	std::setlocale(LC_ALL, "rus");
	int a, b, c;

	std::cin >> a>> b >> c;

	
	double alpha, betta, gama;

	alpha = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c);
	betta = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
	gama = (pow(b, 2) + pow(c, 2) - pow(a, 2)) /(2 * c * b);

	alpha = (acos(alpha) * 180) / M_PI;
	betta = (acos(betta) * 180) / M_PI;
	gama = (acos(gama) * 180) / M_PI;

	std::cout << alpha << " " << betta << " " << gama;
	if (int(alpha) == 60 &&int( betta )== 60 &&int( gama) == 60) {
		std::cout << "Треугольник равносторонний";
	}
	else if(alpha==betta||alpha==gama||gama==betta) {
		std::cout << "Треугольник равнобедренный";
	}
	else {
		std::cout << "Треугольник разносторонный";
	}
	


	return 0;
}