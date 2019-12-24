#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, ab, ac;
    
    cin >> a >> b >> c;
    
    ab = abs(a - b);
    ac = abs(a - c);
    
    if (ab < ac)
    {
        cout << b << endl;
    }
    else if (ac < ab)
    {
        cout << c << endl;
    }
    else
    {
        cout << "Они на одинаковой дистанции" << endl;
    }
    
    
    return 0;
}
