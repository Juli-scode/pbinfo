#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    int i;
    cin.get(s,255);
    for(i=0;i<strlen(s);i++)
    {
        if(i==0)
            cout<<char(int(s[i]+'A'-'a'));
        if(s[i]!=' '&&(s[i+1]==' '||s[i-1]==' '))
        cout<<char(int(s[i]+'A'-'a'));
        if(i==int(strlen(s)-1))
            cout<<char(int(s[i]+'A'-'a'));
        else cout<<s[i];
    }
    return 0;
}
