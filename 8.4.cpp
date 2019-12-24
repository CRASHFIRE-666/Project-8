#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian');
    int x, y;
    
    cin >> x >> y;
    
    if (x != 0 && y != 0)
    {
        if (y > 0 && x > 0)
        {
            cout << 1 << endl;
        }
        else if (y > 0 && x < 0)
        {
            cout << 2 << endl;
        }
        else if (y < 0 && x < 0)
        {
            cout << 3 << endl;
        }
        else if (y < 0 && x > 0)
        {
            cout << 4 << endl;
        }
    }
    else
    {
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    return 0;
}
