#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[255];
    int i,j;
  strcpy(s,"optsprezece"); i=0; j=strlen(s)-1;
while(i<j)
{
 if(strchr("aeiou",s[i])==NULL && strchr("aeiou",s[j])!=NULL)
 {s[i]=s[i]+1; s[j]=s[j]-1;}
 i=i+1;j=j-1;
 cout<<s;
}
}
