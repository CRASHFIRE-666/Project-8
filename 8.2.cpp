#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cin>>a>>b>>c;
    if (a>b) {
        if (b>c) {
            sum=a+b;
        }
        else {
            sum=a+c;
        }
    }
    else {
        if (a>c) {
            sum=a+b;
        }
        else {
            sum=b+c;
        }
    }
    cout<<sum<<endl;
    return 0;
}
