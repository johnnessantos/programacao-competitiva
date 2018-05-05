#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){

    float dinheiro;
    int i,aux;
    int notas[] = {100,50,20,10,5,2};
    int moedas[] = {50,25,10,5,1};
    string d;
    int real,moeda;
    cin>>d;

    real = atoi(d.substr(0,d.size()-3).data());
    moeda = atoi(d.substr(d.size()-2,2).data());

    printf("NOTAS:\n");
    for(i=0; i<6; i++){
        aux = real/notas[i];
        printf("%d nota(s) de R$ %.2f\n",aux,(float)notas[i]);
        real = real%notas[i];
    }

    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",real);
    for(i=0; i<5; i++){
        aux = moeda/moedas[i];
        printf("%d moeda(s) de R$ %.2f\n",aux,moedas[i]/100.0);
        moeda = moeda%moedas[i];
    }

    return 0;
}
