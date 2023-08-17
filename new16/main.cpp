#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[12],t[23];
    cin>>s>>t;
    if(strlen(0)>strlen(t))
        cout<<s<<endl<<t;
    else cout<<t<<endl<<s;
}
