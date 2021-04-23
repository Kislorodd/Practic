#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    setlocale(LC_ALL,"RUS");
    int const N = 30;
    int osadky[N], temp[N];
    int rain=0, snow=0;

    for (int i = 0; i < N; i++) {
        osadky[i] = 0 + rand() % 30;
        temp[i] = -20 + rand() % 40;
    }

    cout << "Температура  :     Осадки  : " << endl;
    for (int i = 0; i < N; i++)
        cout << i + 1 << "      "<< temp[i] << "               " << osadky[i] << endl;
    cout << endl;

    for (int i = 0; i < N; i++)
    {
    if (temp[i] > 0) rain += osadky[i];
    else snow += osadky[i];
    }
    cout << "Количество дождя:  " << rain << endl;
    cout << "Количество снега:  " << snow << endl;
}
