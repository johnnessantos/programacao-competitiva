#include<iostream>
using namespace std;

int ContMaior=0;
struct No{
    int valor;
    int qtd;
};

int contador(int v[],int pos){
    int k = pos+1;
    while(v[pos]==v[k]){
        k++;
    }
    return k;
}

int Posicao(int v[], int inicio , int N){
    int i,aux=0;
    for(i=inicio;i<N;i++){
        if(v[aux]<=v[i]){
            if(v[aux]<v[i]){
                aux=i;
            }else{
                ContMaior++;
            }
        }
    }
    return aux;
}

int Media(int N){
    int i,cont=0,pos;
    int v[N];
    int maior;

    for(i=0;i<N;i++){
        cin>>v[i];
    }
    pos=Posicao(v,0,N);
    maior=contador(v,pos);
    ContMaior--;
    /*while(ContMaior>0){

        if(maior < contador(v,pos)){
            maior=contador(v,pos);
        }
        ContMaior--;
    }*/

    return maior;
}
int main(){
    int i,T,N;
    int maior;
    int prova;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>N;
        cout<<"Caso #"<<i<<": "<<Media(N)<<endl;
    }
    return 0;
}
