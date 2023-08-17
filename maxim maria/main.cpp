#include <iostream>

using namespace std;

int maxim(int n)
{
   int cmax=1;
   while(n)
   {
       if(n%10>cmax&&n%2!=0)
        cmax=n%10;
       n=n/10;
   }
   return cmax;
}
