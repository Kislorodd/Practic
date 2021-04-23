// Дано приложение, в котром нет символа -. Определите количество букв o в первом слове(учтите, что пробелы могут быть до слова)

#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

int main()
{
	int n = 0;
	int ind = 0;
	string str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите строку" << endl;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			ind = i;
			break;
		}
	}
	for (int i = ind; i < str.length(); i++)
	{
		if (str[i] == 'o')
		{
			n++;
		}
		else if (str[i] == ' ')
		{
			break;
		}
	}
	cout << n << endl;
}