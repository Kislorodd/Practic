#include <iostream>
#include <windows.h>
using namespace std;
int M,n, fun=0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    cout<<"������� ����� ��� ���������"<<endl;
    cin>>n;
	int* arr = new int[M];
	cout << "������� ������ �������" << endl;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < M-1; i++)
	{
	   if (arr[i]>n && arr[i+1]>n)
       {

        cout<<arr[i+1]<<endl;
           fun=1;
       }
	}
	if (fun==0)
    {
        cout<<"��� ���������� ���������"<<endl;
    }
	system("pause");
	return 0;
}
