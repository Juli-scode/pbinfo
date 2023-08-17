#include <iostream>
#include <cmath>
using namespace std;
void patrate(int x, int y ){
    int a=x,s,i;
    while (a<=y){
        if (sqrt(a)*sqrt(a)==a){
            cout<<a;
            break;
        }
        else
            a++;
    }
    if (a==y)
        cout<<"nu exista";
    else{
        s=a;
        for (i=a+1; i<=y; i++){
            if (sqrt(i)*sqrt(i)==i){
                cout<<"+"<<i;
                s+=i;
            }
        }
        cout<<"="<<s;
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    patrate(x,y);
    return 0;
}
