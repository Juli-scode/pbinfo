#include <iostream>

using namespace std;

int sub(int n,int v[], int k)
{
    int i,s=0,cnt=0;
    for(i=0;i<n;i++)
    {
        if(v[i]%2!=0)
        {
            cnt++;
            s=s+v[i];
        }
        if(cnt==k)
            return s;
    }
    return -1;
}
int main()
{
    int n,v[1001],k;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    cin>>k;
    cout<<sub(n,v,k);
    return 0;
}
