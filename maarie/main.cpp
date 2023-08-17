#include <iostream>

using namespace std;

void pereche(int n)
{
    int i;
    for(i=1;i<=n;i++)
        if(n%i==0&&i<n/i)
        cout<<"["<<i<<" "<<n/i<<"]";
}
int main()
{
    int i,n;
    cin>>n;
    pereche(n);
    return 0;
}
