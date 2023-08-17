#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100],t[100];
    cin>>s>>t;
    if(strcmp(s,t)<0)
        cout<<s<<" "<<t;
    else
        cout<<t<<" "<<s;
    return 0;
}
