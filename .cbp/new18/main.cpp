#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100],b[100],c[100];
    cin>>a>>b>>c;
    if(strcmp(a,b)<0)
    {
        if(strcmp(b,c)<0)
            cout<<a<<" "<<b<<" "<<c;
        else
            cout<<a<<" "<<c<<" "<<b;
    }
    else if(strcmp(a,b)>0)
    {
        if(strcmp(a,c)<0)
            cout<<b<<" "<<a<<" "<<c;
        else
            cout<<b<<" "<<c<<" "<<a;
    }
    else if(strcmp(b,c)>0)
    {
        if(strcmp(a,b)<0)
            cout<<b<<" "<<a<<" "<<c;
        else cout<<b<<" "<<c<<" "<<a;
    }

    return 0;
}
