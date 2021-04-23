// Дана строка, вывести столбиком ее 3,6 и т.д. символы
#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
int main()
{
	string str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите строку" << endl;
	getline(cin, str);
	for (int i = 2; i < str.size(); i+=3)
	{
		cout << str[i] << endl;
		//i += 2;
	}
}
