// Дана последовательность чисел, оканчивающаяся числом 9999. Количсество чисел в последовательности не меньше двух
// Определить есть ли в ней пара соседних четных чисел. В случае положительного ответа вывести порядковые номера первой из этих пар 
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int cur=1, prev=1;
    int ind = 0;
    int func = 0, func2=0;

    for(int i=0; ; i++)
    {
        prev = cur;
        cin >> cur;
        

        if (cur == 9999) break;

        if (cur % 2 == 0 && prev % 2 == 0 && func==0)
        {
            func = 1;
            func2 = 1;
            ind = i;
        }
    }
    if (func2 == 1)
    {
        cout << "Индексы " << ind << " " << ind+1 << endl;
    }
    if (!func)
    {
        cout << "нет" << endl;
    }
    return 0;
}