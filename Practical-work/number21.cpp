
/*
21. Даны три числа. Определить, могут ли они представлять собой стороны
одного треугольника. Привести алгоритм и код программы.
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
	
	if (int(alpha + betta + gama) == 180) {
		std::cout << "Могут представлять собой треугольник";
	}
	else {
		std::cout << "Не Могут";
	}
	


	return 0;
}