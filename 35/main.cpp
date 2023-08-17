#include <iostream>

using namespace std;

int count(double a[],int n])
{
    double ma,s=0,i;
    int k=0,ok=0;
    for(i=0;i<n;i++){
    s=s+a[i];
    k++;}
    ma=s/k;
    for(i=0;i<n;i++)
    {
        if(a[i]>=ma)
            ok++
            return ok;
    }
}
int main()
{
    double a[100];
    int n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<count(a,n);
    return 0;
}
