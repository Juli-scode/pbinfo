#include <iostream>
using namespace std;
int putere(int n)
{
    int d=2,p=0,mi=9999,minr=9999;
    while(n>1)
    {
        p=0;
        while(n%d==0)
        {
            p++;
            n=n/d;
        }
        if(p!=0)
    if(p<mi)
    {
        mi=p;
        minr=d;
    }
    d++;
    }
    return minr;
    }
int main()
{
    int n;
    cin>>n;
    putere(n);
    return 0;
}
