#include <iostream>
//Subprogramul prime are trei parametri:
//• n, prin care primește un număr natural (n∈[4,109]);
//• x și y, prin care furnizează cele mai mari două numere prime din intervalul [1,n), x<y.
//Scrieți definiția completă a subprogramului.
//Exemplu: dacă n=49, în urma apelului x=43, y=47.
using namespace std;

void prime(int n,int &x,int &y)
{
    int i=n,j,ok;
    while(x==0||y==0)
    {
     ok=1;
     if(i==2)
        ok=1;
     else if(i%2==0)
        ok=0;
     else
        for(j=3;j<=i/2;j+=2)
        if(i%j==0)
        ok=0;
     if(ok==1)
     {
         if(y==0)
            y=i;
         else
            if(x==0)
            x=i;
     }
     i--;
    }
    cout<<"x= "<<x<<endl;
      cout<<"y= "<<y<<endl;


}
int main()
{
    int n,x=0,y=0;
    cin>>n;
    prime(n,x,y);
    return 0;
}
