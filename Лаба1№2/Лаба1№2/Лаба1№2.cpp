#include <iostream>
using namespace std;
int main()
{
	int num;
	int firstnum, secondnum, thirdnum,finalnum;
	setlocale(LC_ALL, "RUS");
	cout << "Введите трехзначное число" << endl;
	cin >> num;
	if (num > 999|| num < -999 || (num < 100 && num>-100))
	{
		cout << "Некорректное число" << endl;
		return 1;
	}
	firstnum = num / 100;
	secondnum = (num % 100) / 10;
	thirdnum = (num % 10);
	finalnum = 100 * thirdnum + 10 * firstnum + secondnum;
	cout << finalnum<< endl;
	system("pause");
	return 0;
}

