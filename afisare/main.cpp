#include <iostream>

using namespace std;
void afisare(int x,int y,int k)
  {
    int nr,i;
    for(i=x;i<=y;i++)
{
    cout<<i<<" ";
    nr++;
    if(nr%k==0) cout<<"*";
}
cout<<"*";
}
int main()
{
    int nr,i,x,y,k;
    cin>>x>>y>>k;
    afisare(x,y,k);
    return 0;
}
