#include <iostream>

using namespace std;

void divizor(int a,int b, int k,int &nr)
{
    int i;
    nr=0;
    for(i=a;i<=b;i++)
        if(i%k==0 && i%10==k)
            nr++;
        cout<<nr;
}
int main()
{
    int a,b,k,nr;
    cin>>a>>b>>k;
    divizor(a,b,k,nr);
    return 0;
}
