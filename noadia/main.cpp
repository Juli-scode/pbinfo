#include <iostream>

using namespace std;

int xsiy(int x,int y)
{
    int i,j,sx=0,sy=0,s3;
    s3=x+y;
    for(i=1;i<=1;i++)
        if(x%i==0)
    {
        sx=sx+i;
    }
    for(j=1;j<=y;j++)
        if(y%j==0)
    {
        sy=sy+j;
    }
    if((sx<s3&&s3<sy)||(sy<s3&&s3<sx))
        return 1;
    else return 0;
}
int main()
{
    int i,j,x,y;
    cin>>x>>y;
    xsiy(x,y);
    return 0;
}
