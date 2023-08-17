#include <iostream>

using namespace std;

void inserare(int& n)
{
    int v[20],p=0;
    while(n)
        v[p]=n%10;
        n/=10;
        p++;
        int nr=0,i;
        for(i=p-1;i>0;--i)
            n=n*10+v[i];
        n=n*10+abs(v[i]-v[i-1]);
        n=n*10+v[0];
}
int main()
{
    int
}
