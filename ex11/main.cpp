#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[20],v[]="aeiou";
    int i;
    for(i=0;i<stren(s);i++)
        if(strchr(v,s[i])!=0)
        s[i]=s[i]-32;
    cout<<s;
    return 0;
}
