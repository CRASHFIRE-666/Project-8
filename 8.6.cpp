#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    
    cin >> x;
    
    if (x > 0 && x < 1000)
    {
        if (x % 1000 >= 100 && x % 2 == 0)
        {
            cout << "Трехзначное четное число" << endl;
        }
        else if (x % 1000 >= 100 && x % 2 != 0)
        {
            cout << "Трехзначное нечетное число" << endl;
        }
        else if (x % 1000 < 100 && x % 1000 >=10 && x % 2 == 0 )
        {
            cout << "Двухзначное четное число" << endl;
        }
        else if (x % 1000 < 100 && x % 1000 >=10 && x % 2 != 0 )
        {
            cout << "Двухзначное нечетное число" << endl;
        }
        else if (x % 1000 < 100 && x % 1000 >=10 && x % 2 == 0 )
        {
            cout << "Однозначное четно число" << endl;
        }
        else if (x % 1000 < 100 && x % 1000 >=10 && x % 2 != 0 )
        {
            cout << "Однозначное нечетное число" << endl;
        }
    }
    else
    {
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    return 0;
}
