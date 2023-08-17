#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,j;
    char s[255];
    cin.get(s,255);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='<')
        {
            j=i+1;
            while(s[j]!='>')
            {
                if(s[j]>=97&&s[j]<=122)s[j]=s[j]-32;
                j++;
            }
            i=j;
        }
    }
    cout<<s;
    return 0;
}
