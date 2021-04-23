#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, discriminant, x, x1, x2;
	cout << "Введите коэфициенты а, b, c уравнения вида a*x^2+b*x+c" << endl;
	cin >> a >> b >> c;
	discriminant = b * b - 4 * a * c;
	if (discriminant < 0)
	{
		cout << "Уравнение не имеет корней" << endl;
		return 1;
	}
	else if (discriminant == 0)
	{
		x = (0 - b) / (2*a);
		cout << "Корень уравнения равен:   " << x << endl;
		return 0;
	}
	else
	{
		x1 = (- b + sqrt(discriminant)) / (2 * a);
		x2 = (- b - sqrt(discriminant)) / (2 * a);
	}
	cout << "Первый корень:   " << x1 << endl;
	cout << "Второй корень:   " << x2 << endl;
	return 0;
}

