
/*
30. Решите квадратное уравнение ax^2 + bx + c = 0. Разработать алгоритм и
написать код программы.



*/

#include<iostream>
using namespace std;
#include<math.h>
int main() {

	setlocale(LC_ALL, "rus");
	double a, b, c, D;
	double y1, y2, x1, x2;
	cin >> a;
	cin >> b;
	cin >> c;

	//  x^2-Sx+P=0

	D = pow(b,2) - (4 * c*a);

	if (D > 0) {
		x1 = fabs(((-b) + sqrt(D)) / (2*a));
		x2 = fabs(((-b) - sqrt(D)) / (2*a));

		cout << "x1=" << x1 << "  " << "x2=" << x2 << endl;

		y1 = b - x1;
		y2 = b - x2;
		cout << endl;
		cout << "y1=" << y1 << "  " << "y2=" << y2 << endl;
	}
	else  if (D == 0) {
		x1 = fabs(((-b) + sqrt(D)) / (2*a));
		x2 = fabs(((-b) - sqrt(D)) / (2*a));

		cout << "x1=" << x1 << "  " << "x2=" << x2 << endl;
		cout << endl;
		y1 = b- x1;
		y2 = b - x2;
		cout << "y1=" << y1 << "  " << "y2=" << y2 << endl;
	}
	else {
		cout << "нет решения";
	}
	return 0;

}