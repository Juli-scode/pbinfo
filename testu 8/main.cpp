#include <iostream>
//nrfp
using namespace std;

void nrfp(int n,int m)
{
    int i,maxim=0;
    for(i=2;i<=n;i++)
    {

        if(factori(i)>=maxim){
                maxim=factori(i);
        m=i;}
    }
}
int main()
{
    int n,m;
    cin>>n;
    nrfp(n,m);
    return 0;
}
