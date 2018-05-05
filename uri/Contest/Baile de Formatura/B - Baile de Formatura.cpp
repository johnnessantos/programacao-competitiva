#include<iostream>
#include<cmath>
using namespace std;

struct No {
    int x;
    int pt;
};

long long int pot(int x, int y){
    long long int p = 1;
    for (int i=1; i<=y; i++) p=p*x;
    return p;
}

int fatora(No primos[], long long int n){
    int p=0;
    int i=2;
    int limite = (int)sqrt(n);
    while(n > 1 && i<=limite){
        if (n%i==0) {
            primos[p].x = i;
            primos[p].pt = 0;
            while(n%i==0){
                primos[p].pt++;
                n=n/i;
            }
            p++;
        }
        i++;
    }
    if(n>1){
        primos[p].x = n;
        primos[p].pt = 1;
        p++;
    }
    return p;
}

int main(){
    int i,t,x,c=1,tam;
    No primos[10];
    long long int value;
    cin>>t;
    while(t>0){
        cin>>x;
        value=1;
        tam = fatora(primos,x);
        for (i=0; i<tam; i++) {
            if (primos[i].pt%2 == 1) primos[i].pt++;
            value = value * pot(primos[i].x,primos[i].pt);
        }
        cout<<"Caso #"<<c<<": "<<value<<endl;
        c++;
        t--;
    }

    return 0;
}
