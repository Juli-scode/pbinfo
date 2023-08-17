#include <iostream>

using namespace std;

void ordonare(int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[j])
        {
            int aux=a[j];
            a[j]=a[i];
            a[i]=aux;
        }
    }
}
