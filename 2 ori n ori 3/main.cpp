#include <iostream>

using namespace std;

void info(int n,int a[][21])
{
    int i,j,impar=1,par=0;
    for(i=1;i<=2*n;i++)
    {
    if(i%2!=0)
        for(j=1;j<=2*n;j++)
    {
        a[i][j]=impar;
        impar+=2;
    }
    else
        for(j=2*n;j>=1;j--)
    {
        a[i][j]=par;
        par+=2;
    }
    }
    for(i=1;i<=2*n;i++)
        {for(j=1;j<=2*n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
            }
}
int main()
{
    int n,a[21][21],i,j;
    cin>>n;
    info(n,a);
    return 0;
}
