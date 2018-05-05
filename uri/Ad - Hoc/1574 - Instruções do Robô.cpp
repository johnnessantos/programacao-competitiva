#include<iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;

int instrucoes[100];

int valorPosicao(int n){
    return instrucoes[n-1];
}

int Cart(char c){
    return (int)c -48;
}

int valorComando(char comando[], int n){
    int valor;
    switch(n){
        case 4:
            return -1;
            break;
        case 5:
            return 1;
            break;
        case 9:
            return valorPosicao(Cart(comando[8]));
            break;
        case 10:
            valor = 10*Cart(comando[8]) + Cart(comando[9]);
            return valorPosicao(valor);
            break;
        case 11:
            valor = 100*Cart(comando[8]) + 10*Cart(comando[9]) + 1*Cart(comando[10]);
            return valorPosicao(valor);
            break;
    }
}

int main(){
    char comando[12];
    int n,t,i,s;

    cin>>n;

    while(n>0){
        s=0;
        cin>>t;
        cin.ignore();
        for(i=0;i<t;i++){
            cin.getline(comando,12);
            instrucoes[i]=valorComando(comando,strlen(comando));
            s=s+instrucoes[i];
        }
        cout<<s<<endl;
        n--;
    }
    return 0;
}
