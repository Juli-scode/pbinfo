#include <iostream>

using namespace std;

int valuri(int n,int v[])
{
     int i;
     for(i=0;i<n;i++)
     {
         if(i%2==0)
         v[i]=i+1;
    else
        v[i]=2*n-i+1;
     }
}
int main()
{
    int n,v[1001],i;
    cin>>n;
    valuri(n,v);
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
