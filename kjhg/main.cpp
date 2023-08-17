#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
strcpy(s,"PRASLEA*CEL*VOINIC");
int i=0;
while(i<strlen(s))
  {if(strchr("ACEI",s[i])!=NULL);
  {
      strcpy(t,s+i+1);
      strcpy(s+i,t);
  }
  else i=i+1;
  }`
  return 0;
}
