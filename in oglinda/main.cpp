#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,nr=0,ok=1;
    char s[255],sep[]=" .,",n[255]="",*p;
    cin.get(s,255);
    p=strtok(s,sep);
    while(p!=0)
    {
        if(strlen(p)%2==1)
           {
               for(i=0;i<strlen(p)/2;i++)
            {
                if(p[i]!=p[strlen(p)-1-i])ok=0;
                int aux=p[i];
                p[i]=p[strlen(p)-1-i];
                p[strlen(p)-1-i]=aux;
            }
            nr++;
            if(ok==1)nr--;
           }
        ok=1;
        strcat(n,p);
        strcat(n," ");
        p=strtok(0,sep);
    }
    if(nr==0)cout<<"nu exista";
    else cout<<n;
    return 0;
}
