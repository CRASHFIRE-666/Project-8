#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    int a,b,max;
    cin>>a>>b;
    if (a>b) {
        max=a;
    }
    else {
        max=b;
    }
    if (a==b) {
        a=0;
        b=0;
    }
    else {
        a=max;
        b=max;
    }
    cout<<"А="<<a<<", В="<<b<<endl;
}
