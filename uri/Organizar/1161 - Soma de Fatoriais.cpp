#include<iostream>
using namespace std;

unsigned long long int fatorial(int n){
    int i;
    unsigned long long int x=1;
    for(i=2;i<=n;i++) x =x*i;
    return x;
}

int main(){
    int m,n;
    unsigned long long int f1,f2;
    while(cin>>m>>n){
        f1 = fatorial(m);
        f2 = fatorial(n);
        cout<<f1+f2<<endl;
    }
    return 0;
}
