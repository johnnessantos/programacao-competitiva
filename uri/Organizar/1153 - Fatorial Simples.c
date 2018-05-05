#include<stdio.h>
#include<stdlib.h>
int fat(int n){
    if(n==1){
        return 1;
    }else{
        return n*fat(n--);
    }
}

void troca(int *a , int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    troca(&a,&b);
    printf("%d %d\n",a,b);


    return 0;
}
