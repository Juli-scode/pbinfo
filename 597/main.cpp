#include <iostream>
using namespace std;

int main(){
    int a[101][101], n, m,i,j;
    cin >> n >> m;
    for(i = 1; i <= n; ++i)
        for(j = 1; j <= m; ++j)
            cin >> a[i][j];
    int imin = 101, imax = 0, jmin = 101, jmax = 0;
    for(i = 1; i <= n; ++i)
        for(j = 1; j <= m; ++j)
            if(a[i][j] == 1){
                if(i > imax)
                    imax = i;
                if(i < imin)
                    imin = i;
                if(j > jmax)
                    jmax = j;
                if(j < jmin)
                    jmin = j;
            }
    cout << imax - imin + 1 << ' ' << jmax - jmin + 1 << endl;
    for(i = imin; i <= imax; ++i, cout << endl)
        for(j = jmin; j <= jmax; ++j)
            cout << a[i][j] << ' ';
    return 0;
}
