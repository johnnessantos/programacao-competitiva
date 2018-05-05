#include<iostream>
using namespace std;

int contador(int v[],int pos,int N){
    int k = pos+1;
    while(v[pos]==v[k] && k<N){
        k++;
    }
    return (k - pos);
}

int valorMaior(int v[], int N){
    int i,aux=v[0];
    for(i=1;i<N;i++){
        if(aux<v[i]){
            aux=v[i];
        }
    }
    return aux;
}

int Media(int N){
    int i,maior,cont=0;
    int v[N];

    for(i=0;i<N;i++){
        cin>>v[i];
    }
    maior=valorMaior(v,N);
    for(i=0;i<N;i++){
        if(maior == v[i]){
            if(cont<contador(v,i,N)){
                cont=contador(v,i,N);
            }
        }
    }
    return cont;
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
