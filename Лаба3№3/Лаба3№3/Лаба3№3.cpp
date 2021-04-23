
//  Даны площади нескольких квадратов. Найти длину диагонали большего из них.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double N, S, side, d, max=0;
	cout << "Введите количество квадратов" << endl;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cout << "Введите площадь "<< i+1 <<" квадрата" << endl;
		cin >> S;             //Площадь квадрата
		side = sqrt(S);          //Сторона квадрата
		d = side * sqrt(2);      //Диагональ
		if (d > max)
		{
			max = d;
			//cout << max << endl << endl;
		}
	}
	cout <<"Наибольшая диагональ= "<< max << endl;
}

