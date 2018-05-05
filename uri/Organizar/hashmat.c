#include<stdio.h>
#include<stdlib.h>
struct No{
    int info;
    struct No *prox;
};
typedef struct No Tno;
long unsigned int a;
long unsigned int b;
Tno *valores=NULL;

void inserir(Tno **valores, int n){
    Tno *novo = malloc(sizeof(Tno));
    novo->info = n;
    novo->prox = NULL;
    if (*valores == NULL){
        *valores = novo;
    }else{
        Tno *aux = *valores;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}
int main(){

    while((scanf("%ld %ld",&a,&b)!=EOF) && a!= -1){
        if(a > b){
            inserir(&valores,(a-b));
        }else{
            inserir(&valores,(b-a));
        }
    }
    while(valores!=NULL){
         printf("%d\n",valores->info);
         valores=valores->prox;
    }
    return 0;
}
