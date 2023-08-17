#include <iostream>

using namespace std;

void P(int x[], int n, int s)
{
   int i;
   for(i=0;i<n;i++)
   {if(x[i]%2!=0)
    s=s+x[i];}
}
