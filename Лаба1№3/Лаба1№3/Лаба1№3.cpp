#include <iostream>
using namespace std;
int main()
{
		int firstnumx, secondnumx, thirdnumx;
	setlocale(LC_ALL, "RUS");
	for (int x = 100; x < 999; x++)
	{
		firstnumx = x / 100;
		secondnumx = (x % 100) / 10;
		thirdnumx = (x % 10);
		if (564==secondnumx*100 + thirdnumx*10 +firstnumx)
		{
			cout << x;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}