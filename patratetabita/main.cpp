#include <iostream>
#include <cmath>
using namespace std;

void patrate(int x,int y)
{
    int s=0,ok=0,i;
    for(i=x;i<=y;i++)
        if(sqrt(i)*sqrt(i)==i)
        {if(ok==0)
        {cout<<i; ok=1;}
    else
        cout<<"+"<<i;
    s=s+i;}
    cout<<"="<<s;
}
