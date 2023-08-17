#include <iostream>

using namespace std;

int rec(int n)
{
    int c,p=1,m=0;
    while(n)
    {
        c=n%10;
        m=c*p+m;
        p=p*10;
        n=n/10;
    }
    return m;
}
