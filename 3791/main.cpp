#include <fstream>

using namespace std;
void interclasare()
{
ifstream fin1("file1.txt");
ifstream fin2("file2.txt");
ofstream fout("file.out");
int n,m,a[100000],b[100000],c[100000];
    int a[n];
    for( int i=0; i<n; i++)
        fin>>a[i];
    fout<<"m=";
    fin>>m;
    int b[m];
    for( int j=0; j<m; j++)
        fin>>b[j];
    int c[m+n];
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    if(i<=n)
    {
        for(int p=i; p<n; p++)
        {
            c[k]=a[p];
            k++;
        }
    }
    if(j<=m)
    {
        for(int p=j; p<m; p++)
        {
            c[k]=b[p];
            k++;
        }
    }
    for (int p=0; p<k; p++)
        fout<<c[p]<<" ";
    return 0;
}
