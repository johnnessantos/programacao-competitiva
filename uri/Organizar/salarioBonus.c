#include<stdio.h>
char nome[50];
double sal,vendas,total;

int main(){
    scanf("%s",&nome);
    scanf("%lf",&sal);
    scanf("%lf",&vendas);
    total= sal + ((vendas/100)*15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
