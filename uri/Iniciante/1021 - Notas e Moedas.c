#include<stdio.h>
int main(){
    float dinheiro;
    int i,aux;
    int notas[] = {100,50,20,10,5,2};
    int moedas[] = {50,25,10,5,1};

    scanf("%f ",&dinheiro);
    int real = (int)dinheiro;
    dinheiro = dinheiro*100;
    int moeda = (int)(dinheiro - (real*100));

    /*
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
    */
    printf("%d %d\n",real,moeda);

    return 0;
}
