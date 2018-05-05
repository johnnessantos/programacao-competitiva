#include<iostream>
using namespace std;

int toI(char c){ return (int)c-'0'; }

int conv(string n){
    int b = toI(n[0])*10 + toI(n[1]);
    for(int i=0; i<toI(n[3]); i++) b *=10;
    return b;
}

int main(){
    int V,aux;
    string n;

    while(cin>>n && n.compare("00e0")!=0){
        V = conv(n);
        aux = 1;
        while(aux<=V) aux = (aux<<1);
        aux = (aux>>1);

        cout<<(V-aux)*2+1<<endl;
    }
    return 0;
}
