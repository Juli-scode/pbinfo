#include <iostream>

using namespace std;

void Imapre(int& n)
{
   int c,s=n,i=1;
while(s)
{
    c=s%10;
    if(c%2!=0)
        n=n-1*i;
    i*=10;
    s/=10;
}
}
