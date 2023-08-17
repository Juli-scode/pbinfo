#include <iostream>

using namespace std;

int program(int n)
{
   int nr=0,p=1;
   while(n)
   {
       nr=nr+(n%2)*p;
       p=p*10;
       n=n/2;
   }
   return nr;
}
int main()
{
    int n;
    cin>>n;
    cout<<program(n);
    return 0;
}
