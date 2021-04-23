// Известны данные о количестве выпавших осадков за каждый день марта. Верно ли, что осадков не было 10 дней в месяц?

#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int osadki, k=0;

	for (int i = 1; i < 32; i++)
	{
		cout << "Введите количество мм осадков " << i << "числа" << endl;
		cin >> osadki;
		if (osadki == 0)
		{
			k++;
		}
	}
			if (k > 9)
			{
				cout << "Осадков не было минимум 10 дней в месяц" << endl;
			}
			else
				cout << "Не было 10 дней без осадков" << endl;
	
	return 0;
}
/*
2 
0
3
5
0
7
0
6
4
7
0
6
0
77
0
35
0
4
0
7
0
6
3
0
653
0
546
0
7
0
8
*/