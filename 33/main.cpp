#include <iostream>

using namespace std;

void multiplu(int a[],int n,int k)
{
 int i,nr=0;
 for(i=0;i<n;i++)
 {
     if(a[i]%10==k)
     {
         if((a[i]/k)*k=a[i])
            nr++;
     }
 }
 return nr;
}
int main()
{
    int a[101],i,n,k;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    cout<<multiplu(a,n,k);
    return 0;
}
