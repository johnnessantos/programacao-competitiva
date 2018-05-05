#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
struct No{
    unsigned long long int info;
    struct No *prox;
};
typedef struct No Tno;
struct Cab{
    Tno *inicio;
    Tno *fim;
};
typedef struct Cab Cabeca;
long long int maior( long long int x, long long int y){
    if(x<y){
        return y;
    }
    return x;
}
int grandeza(long long int n){
    if(n < 1){
        return 0;
    }else{
        return 1 + grandeza(n/2);
    }
}
int pot2(int n){
    if(n<=1) return 2;
    else return 2*pot2(n-1);
}

void inserir(Cabeca **raiz, long long int x){
    Tno *novo = malloc(sizeof(Tno));
    novo->info=x;
    novo->prox=NULL;
    if((*raiz)->inicio == NULL){
        (*raiz)->inicio = novo;
        (*raiz)->fim=novo;
    }else{
        ((*raiz)->fim)->prox=novo;
        (*raiz)->fim=novo;
    }
}

void Exibir(Cabeca *raiz){
    while(raiz->inicio!=NULL){
        printf("%lld\n",raiz->inicio->info);
        raiz->inicio=raiz->inicio->prox;
    }
}
int main(){
    long long int x;
    long long int y;

    Cabeca *raiz = malloc(sizeof(Cabeca));
    raiz->fim=NULL;
    raiz->inicio=NULL;

    while(scanf("%d %d",&x,&y)!=EOF && x!=-1){
        if (grandeza(x+y) > grandeza(maior(x,y))){
            inserir(&raiz,((x+y)- pot2(grandeza(maior(x,y)))));
        }else{
            inserir(&raiz,(x+y));
        }
    }
    Exibir(raiz);

    return 0;
}
