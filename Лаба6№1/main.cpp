#include <iostream>
#include <windows.h>
using namespace std;
int n, mult = 1, sum = 0,mid=0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int* arr = new int[n];
	cout << "Введите размер массива" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		mult *= arr[i];
	}
	cout << "Произведение равно: " << mult << endl;

	for (int i = 0; i < n; i++)
	{
	    if(i<6)
        {
		sum += arr[i];
        }
        else break;
	}
	cout << "Сумма 6 первых чисел массива равна: " << sum << endl;

	for (int i = 0; i < n; i++)
	{
	 mid+=arr[i];
	}
	cout<<"Среднее арифметическое массива равно: "<<mid/n<<endl;
	system("pause");
	return 0;
}


