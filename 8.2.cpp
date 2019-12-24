#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int a, b, c, min;
    
    cin >> a >> b >> c;
    
   if (c <= a && c <= b)
   {
       min = c;
   }
   else if (b <= a && b <= c)
   {
       min = b;
   }
   else
   {
       min = a;
   }

    cout << a + b + c - min << endl;
    return 0;
}
