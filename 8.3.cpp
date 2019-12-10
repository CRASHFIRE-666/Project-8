#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int ax,ay,bx,by,cx,cy,lb,lc;
    cout<<"Введите координаты точек";
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    lb=sqrt(pow(ax-bx,2)+pow(ay-by,2));
    lc=sqrt(pow(ax-cx,2)+pow(ay-cy,2));
    if (lb>lc) {
        cout<<"c="<<lc<<endl;
    }
    else {
        cout<<"b="<<lb<<endl;
    }
    return 0;
}
