//Дано преложение. Определите максимальное количество идущих подряд пробелов.


#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
int n=0, buf=0;
int main()
{
	string str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите строку" << endl;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			n++;
			if (buf < n)
			{
				buf = n;
			//	cout << "буферная" << buf << endl;
			}
		}
		else n = 0;
	}
	cout << buf << endl;
}