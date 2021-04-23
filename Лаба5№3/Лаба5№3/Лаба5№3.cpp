//Вывести все шестизначные счастливые числа (сумма трех левых цифр равна сумме трех правых)
#include <iostream>
#include<windows.h>
using namespace std;
int i, edin, des, sot, tys, destys, sottys;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (i = 100000; i < 1000000; i++)
	{

		edin = i % 10;
		des = (i % 100 - edin) / 10;
		sot = (i % 1000 - edin - des * 10) / 100;
		tys = (i % 10000 - edin - des * 10 - sot * 100) / 1000;
		destys = (i % 100000 - edin - des * 10 - sot * 100 - tys * 1000)/10000;
		sottys = i / 100000;
		if ((edin + des + sot) == (tys + destys + sottys))
		{
			cout << i << endl;
		}
	
	}
}
