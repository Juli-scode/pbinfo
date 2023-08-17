#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[225],t[225];
    cin.get(s,225);
    cin.get();
    cin.get(t,225);
    strcat(s," ");
    strcat(s,t);
    cout<<s;
    return 0;
}
