#include <iostream>

using namespace std;

void armonie(int x,int y)
{
    int i,j,s1=0,s2=0,s3;
    s3==x+y;
    for(i=1;i<=x;i++)
        if(x%i==0)s1=s1+i;
    for(j=1;j<=y;j++)
        if(y%j==0)s2=s2+j;
    if((s1<s3&&s3<s2)||(s1>s3&&s3>s2))
        return 1;
    else return 0;
}
int main()
{
    int x,y;
    cin>>x>>y;
    armonie(x,y);
    return 0;
}
