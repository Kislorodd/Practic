#include <iostream>
using namespace std;
int main()
{
	double BoatSpeed, WaterSpeed, Result;
	setlocale(LC_ALL, "RUS");
	cout << "Введите собственную скорость катера" << endl;
	cin >> BoatSpeed;
	cout << "Введите скорость течения" << endl;
	cin >> WaterSpeed;
	if (BoatSpeed <= 0 || WaterSpeed <= 0)
	{
		cout << "Некорректно введена скорость" << endl;
		return 1;
	}
	else
	{
		Result = (BoatSpeed + WaterSpeed) / (BoatSpeed - WaterSpeed);
	}
	cout << Result << endl;
	system("pause");
	return 0;
}

