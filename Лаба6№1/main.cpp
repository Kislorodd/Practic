#include <iostream>
#include <windows.h>
using namespace std;
int n, mult = 1, sum = 0,mid=0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int* arr = new int[n];
	cout << "������� ������ �������" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		mult *= arr[i];
	}
	cout << "������������ �����: " << mult << endl;

	for (int i = 0; i < n; i++)
	{
	    if(i<6)
        {
		sum += arr[i];
        }
        else break;
	}
	cout << "����� 6 ������ ����� ������� �����: " << sum << endl;

	for (int i = 0; i < n; i++)
	{
	 mid+=arr[i];
	}
	cout<<"������� �������������� ������� �����: "<<mid/n<<endl;
	system("pause");
	return 0;
}


