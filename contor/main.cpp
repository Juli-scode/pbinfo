#include <iostream>

using namespace std;

void program(int a[][101],int m,int n)
{
    int i,j,ok=0,x;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
        if(i==1||j==n||j==1||j==m)//conditia de chenar!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            if(a[i][j]==x) ok=1;
        if(ok==1) cout<<"DA";
        else cout<<"NU ";
}
int main()
{
    int a[101][101],m,n,i,j,ok=0;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
        cin>>a[i][j];
    program(a,m,n);
    cout<<a[i][j]<<" ";
    return 0;
}
