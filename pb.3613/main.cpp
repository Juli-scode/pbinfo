#include <iostream>
using namespace std;


int nr=-1, num, v[1001], k;

int mult(int n, int a[])

{
    int ok=1;
    for (int i=0; i<n-1; ++i)
    {
        for (int j=i+1; j<n; ++j)
            if (a[i]==a[j])
            {
                ok=0;
                break;
            }
        if (ok==0) break;
    }
    return ok;
}
int main()

{
    while (f >> num)
    {
        ++nr;
        v[nr]=num;
    }
    for (k=1; k<nr; ++k)
    {
        if (mult(k,v)==0) break;
    }
    --k;
    cout << k;

}
