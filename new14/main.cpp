#include <iostream>
#include <cstring>
using namespace std;
//ex1 de pe fisa 1
int main()
{
    char s[256],c1,c2;
    int i;
    cin>>c1>>c2;
    cin.get();
    cin.get(s,255);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c1)
            s[i]=c2;
        if(s[i]==c2)
            s[i]=c1;
    }
    for(i=0;i<strlen(s);i++)
        cout<<s[i];
    return 0;
}
