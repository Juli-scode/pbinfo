#include <iostream>
#include <cmath>

using namespace std;
void patrate(int x, int y )
{int i,s=0,ok=0;
for(i=x;i<=y;i++)
if(sqrt(i)*sqrt(i)==i)
{if(ok==0)
{cout<<i; ok=1;}
 else
    cout<<"+"<<i;
          s+=i;}
            cout<<"="<<s;
}

int main()
{
   int x,y;
   cin>>x>>y;
   patrate(x,y);
    return 0;
}
