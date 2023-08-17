#include <iostream>

using namespace std;

int main()
{
    int p,n,d=2;
    cin>>n;
    while(n>1)
    {
        p=0;
        while(n%d==0)
        {
            p++;
            n=n/d;
        }
        if(p!=0) cout<<d<<" "<<"la puterea a"<<" "<<p<<"a"<<endl;
        d++;
    }
    return 0;
}
