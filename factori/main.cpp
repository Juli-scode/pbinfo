#include <iostream>

using namespace std;

int factori(int n,int m)
{
        int p1,p2,d=2,cnt=0;;
    while(n>1||m>1)
    {
        p1=0;
        p2=0;
        while(n%d==0)
        {
            p1++;
            n=n/d;
        }
    while(m%d==0)
    {
        p2++;
        m=m/d;
    }
            if(p1!=0&&p1==p2)
            cnt++;

            d++;
    }
    return cnt;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<factori(n,m);
    return 0;
}
