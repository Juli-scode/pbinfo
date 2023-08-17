#include <iostream>
using namespace std;

void suma(int n,int &s)
{
    int a[10]= {0};
    s=0;
    while(n!=0)
    {
        if ((n%10)%2==0&&a[n%10]==0)
        {
            s+=n%10;
            a[n%10]++;
        }
        n=n/10;
    }
}
