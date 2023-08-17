#include <iostream>
using namespace std;
int kpn(int a, int b, int k)

{
    int i,s;
    for(;a<=b&&k!=0; a++)
    {
        s=1+a;
        for(i=2; i<=a/2; i++)
        {
            if(a%i==0)
            {
                s+=i;
            }
        }
        if(a%2==s%2)
            k--;
    }
    a--;
    if(k==0)return a;
    else return -1;
}
int main()
{
    int i,s,a,b,k;
    cin>>a>>b;
    kpn(a,b,k);
    return 0;
}
