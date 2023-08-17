#include <iostream>

using namespace std;

void numar(int n,int c, int &m)
{
    int r,p=1,n2=n;
    m=0;
    while(n)
    {
        r=n%10;
        if(r!=c)
            m=m+p*r;
        p*=10;
        n/=10;
    }
    if(m==0&&n2%10==c)
        m--;

}
int main()
{
    int c,n,m;
    cin>>n>>c;
    numar(n,c,m);
    cout<<m;
    return 0;
}
