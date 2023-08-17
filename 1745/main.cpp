#include <iostream>

using namespace std;

int minDivPrim(int n)
{
    int p=1,d=2,ok=1;
    while(n!=1)
    {
        putere=0;
        while(n%d==0)
        {
            putere ++;
            n/d=0;
        }

        if(putere!=0)
            p*=d;
        d++;
        if(d*d>n)
            d=n;
    }
    return p;
}
