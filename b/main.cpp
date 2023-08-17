#include <iostream>
using namespace std;
void program(int n,int a[][25])
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i==1||i==n||j==1||j==n) a[i][j]=i+j;
    for(j=n-1;j>=2;j--)
        for(i=n-1;i>=2;i--)
            a[i][j]=a[i-1][j+1]+a[i][j+1]+a[i+1][j+1];

}
int main()
{
    int i,n,j,a[25][25];
    cin>>n;
     for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
         cin>>a[i][j];

         program(n,a);
          for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
         return 0;
}
