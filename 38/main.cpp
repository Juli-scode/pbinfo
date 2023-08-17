#include <iostream>

using namespace std;

void shift(int a[], int n)

{
    int p=a[0],i;
    for(i=0;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-i]=p;
}
int main()
{
    int a[101],n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    shift(a,n)
    return 0;
}
