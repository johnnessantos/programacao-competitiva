#include<iostream>
#include <string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int instrucoes[100];

int valorPosicao(int n){
    return instrucoes[n-1];
}

int Cart(char c){
    return (int)c-48;
}

int valorComando(char comando[], int n){
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
    }
}

int main(){
    char comando[10];
    int n,t,i,s;

    cin>>n;

    while(n>0){
        s=0;
        cin>>t;
        cin.ignore();
        for(i=0;i<t;i++){
            cin.getline(comando,10);
            instrucoes[i]=valorComando(comando,strlen(comando));
            s=s+instrucoes[i];
        }
        cout<<s<<endl;
        n--;
    }
    return 0;
}
