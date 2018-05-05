#include<stdio.h>
int main(){
    float n;
    int notas;
    int moedas;
    scanf("%f",&n);
    notas=n;
    moedas=(n-notas)*100;
    printf("%d %d",notas,moedas);

    return 0;
}
