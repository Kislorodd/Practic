#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double edgeA, edgeB, edgeC;
	cout << "Введите три стороны треугольника" << endl;
	cin >> edgeA >> edgeB >> edgeC;
	if (edgeA == edgeB || edgeB == edgeC || edgeC == edgeA)
	{
		cout << "Треугольник равнобедренный" << endl;
	}
	else cout << "Треугольник не равнобедренный" << endl;
	return 0;
}
