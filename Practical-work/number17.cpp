
/*
17. Даны три числа - стороны треугольника. Определить является треугольник
прямоугольным
*/

#include<iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {

	int m, n, h;

	std::cin >> m >> n >> h;


	double alpha, betta, gama;

	alpha = (pow(m, 2) + pow(h, 2) - pow(n, 2)) / (2 * m * h);
	betta = (pow(m, 2) + pow(n, 2) - pow(h, 2)) / (2 * m * n);
	gama = (pow(n, 2) + pow(h, 2) - pow(m, 2)) / (2 * h * n);

	alpha = (acos(alpha) * 180) / M_PI;
	betta = (acos(betta) * 180) / M_PI;
	gama = (acos(gama) * 180) / M_PI;

	if (alpha == 90 || betta == 90 || gama == 90) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}




	return 0;
}