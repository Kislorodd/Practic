//   Известна зарплата каждого из 12 работников фирмы за каждый месяц 1го квартала 
//   а) Выведите в какой из месяцев каждый работник получил максимальную зарплату 
//   б) Выведите для каждого месяца у какого работника была максимальная зарплата 





#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int month1, month2, month3, buf1 = 0, buf2 = 0, buf3 = 0, maxzp1, maxzp2, maxzp3;
    cout << "Пункт б" << endl;
    for (int i = 1; i < 13; i++)
    {
        cout << " Введите з/п за 1 месяц " << i << " работника" << endl;
        cin >> month1;
        if (month1 > buf1)
        {
            buf1 = month1;
            maxzp1 = i; 3;

        }
        cout << " Введите з/п за 2 месяц " << i << " работника" << endl;
        cin >> month2;
        if (month2 > buf2)
        {
            buf2 = month2;
            maxzp2 = i;
        }
        cout << " Введите з/п за 3 месяц " << i << " работника" << endl;
        cin >> month3;
        if (month3 > buf3)
        {
            buf3 = month3;
            maxzp3 = i;
        }
    }
        cout << "Наибольшую з/п в первом месяце получил работник номер " << maxzp1 << endl;
        cout << "Наибольшую з/п вo втором месяце получил работник номер " << maxzp2 << endl;
        cout << "Наибольшую з/п в третьем месяце получил работник номер " << maxzp3 << endl;

        int  zp_1, zp_2, zp_3;
        cout << "Пункт а" << endl;
        for (int j = 0; j < 12; j++)
        {
            cout << " Введите з/п за 1 месяц " << j + 1 << " работника" << endl;
            cin >> zp_1;
            cout << " Введите з/п за 2 месяц " << j + 1 << " работника" << endl;
            cin >> zp_2;
            cout << " Введите з/п за 3 месяц " << j + 1 << " работника" << endl;
            cin >> zp_3;

            if (zp_1 > zp_2 && zp_1 > zp_3)
            {
                cout << "Наибольшая зарплата работника " << j + 1 << " в первом месяце" << endl;
            }
                if (zp_2 > zp_1 && zp_2 > zp_3)
                {
                    cout << "Наибольшая зарплата работника " << j + 1 << " во втором месяце" << endl;
                }
                if(zp_3>zp_1 && zp_3> zp_2)
                    {
                        cout << "Наибольшая зарплата работника " << j + 1 << " в третьем месяце" << endl;
                    }
        }
}
/*
    1100 
    1400 
    950
    790
    2000 
    1420
    890
    1900 
    690
    1150
    1160 
    780
    1200
    1300
    1450
    780
    200
    355
    678
    1401
    6500
    456
    10000
    3780
    590
    890
    4460
    340
    570
    5454
    765
    342
    1507
    4234
    454
    1231

*/