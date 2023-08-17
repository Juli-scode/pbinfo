#include <iostream>

using namespace std;

void oglindit(int n)
{
    int ogl=0;
      while(n!=0)
    {
        ogl=ogl*10+n%10;
        n/=10;
    }
        cout<<ogl;

}
int main()
{
    int n;
    cin>>n;
    oglindit(n);
}
