#include<iostream>
#include<cstdlib>
using namespace std;
struct No{
    int info;
    No *prox;
};
struct Cabeca{
    No *inicio;
    No *fim;
};
void inserir(Cabeca **valores, int n){
    No *novo = (No*) malloc(sizeof(No));
    novo->info = n;
    novo->prox = NULL;
    if ((*valores)->inicio == NULL){
        (*valores)->inicio = novo;
        (*valores)->fim=novo;
    }else{
        (*valores)->fim->prox=novo;
    }
}

int main(){
    unsigned int x,y;
    No *aux = NULL;
    Cabeca *raiz = (Cabeca*)malloc(sizeof(Cabeca));
    raiz->inicio=NULL;
    raiz->fim=NULL;

    while((cin>>x>>y)&&x!=-1){
        if(x>y){
            inserir(&raiz,(x-y));
        }else{
            inserir(&raiz,(y-x));
        }
    }
    aux=raiz->inicio;
    while(aux!=NULL){
        cout<<aux->info<<endl;
        aux=aux->prox;
    }
    return 0;
}
