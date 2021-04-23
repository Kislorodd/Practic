#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int age, years, month, secondAgeNum;
	cout << "Введите возраст человека(в месяцах)" << endl;
	cin >> age;
	if (age < 1 || age>1188)
	{
		cout << "Некорректный возраст" << endl;
		return 1;
	}
	else
	{
		years = age / 12;
		month = age % 12;
		secondAgeNum = (years % 10);
		if ( years > 9 && years < 20)
		{
			cout << years << " Лет" << endl;
		}
		else
		{
			if (secondAgeNum == 0)
			{
				cout << years << " Лет " << endl;
			}
			else if (secondAgeNum == 1)
			{
				cout << years << " Год " << endl;
			}
			else
				if (secondAgeNum == 2 || secondAgeNum == 3 || secondAgeNum == 4)
				{
					cout << years << " Года " << endl;
				}
				else
					if (secondAgeNum == 5 || secondAgeNum == 6 || secondAgeNum == 7 || secondAgeNum == 8 || secondAgeNum == 9)
						cout << years << " Лет " << endl;
		}
		

		if (month == 0)
		{
			return 0;
		}
		if (month == 1)
		{
			cout << month << " Месяц " << endl;
		}
		else
			if (month == 2 || month == 3 || month == 4)
			{
				cout << month << " Месяца " << endl;
			}
			else
				if (month == 5 || month == 6 || month == 7 || month == 8 || month == 9 || month == 10 || month == 11 || month == 12)
				{
					cout << month << " Месяцев " << endl;
				}
	}
}

