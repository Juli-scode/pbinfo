#include <iostream>

using namespace std;

void program1(int a[][101],int m,int n)
{
  int i,j,k=2;
  for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
        if(k%5==0)
        k=k+2;
    a[i][j]=k;
    k=k+2;
}
int main()
{
    int i,j,k=2,a[101][101],m,n;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
        cin>>a[i][j];
    program1(a,m,n);
    cout<<a[i][j]<<" ";
    return 0;
}
