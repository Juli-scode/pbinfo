#include <iostream>

using namespace std;

int concatenare(int &n)
{
    int c,rec=0,inv=0,p=1,nr=1,conc=0;
    while(n!=0)
    {
        c=n%10;
        inv=inv*10+c;
        if(c%2==0)
        {
            rec=c*p+rec;
            p=p*10;
            n=n/10;
            nr=nr*10;
        }

        return rec*nr+inv;
    }
}
