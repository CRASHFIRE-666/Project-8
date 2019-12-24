#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    
    cin >> x;
    
    if (x > 0 && x % 2 == 0)
    {
        cout << "Положительное четное число" << endl;
    }
    else if (x > 0 && x % 2 != 0)
    {
        cout << "Положительное нечетное число" << endl;
    }
    else if (x < 0 && x % 2 == 0)
    {
        cout << "Отрицательное четное число" << endl;
    }
    else if (x < 0 && x % 2 != 0)
    {
        cout << "Отрицательное нечетное число" << endl;
    }
    else if (x == 0)
    {
        cout << "Нулевое значение" << endl;
    }
    
    return 0;
}
