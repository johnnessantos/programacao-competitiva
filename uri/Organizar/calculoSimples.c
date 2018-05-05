#include<stdio.h>
int codigo,qtd;
float vlr,pgr;
float leitura(){
    scanf("%d",&codigo);
    scanf("%d",&qtd);
    scanf("%f",&vlr);
    return qtd*vlr;
}
int main(){
    pgr= leitura() + leitura();
    printf("VALOR A PAGAR: R$ %.2f\n",pgr);
    return 0;
}
