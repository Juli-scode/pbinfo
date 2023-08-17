#include <iostream>

using namespace std;

void divX(int n,int x)
{
    int i,j;
    for(i=n*x;i>=1;i-=x)
    cout<<i<<" ";
}
int main()
{
    int n,x;
    cin>>n>>x;
    divX(n,x);
    return 0;
}
