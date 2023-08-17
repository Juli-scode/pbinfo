#include <iostream>

using namespace std;

void detcifre(long n, int &prima, int &ultima)
{
    ultima = n%10;

    while(n>=10)
        n = n/10;

    prima = n;
}
int main()
{
    int n;
    cout<<detcifre(n, prima, ultima)<<endl;
    return 0;
}
