#include <iostream>
using namespace std;
int joc(int n)
{
   int c,k;
   c=k=2;
while(k<n)
{
       if(n%k==0) c++;
       k++;
}
return c-1;
}
int main()
{
   int n;
   cin>>n;
   cout<<joc(n);
}

