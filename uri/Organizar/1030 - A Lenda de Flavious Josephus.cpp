#include<iostream>
using namespace std;

int vetor[10000];

void iniciar(int n ){
    int i;
    for(i=0;i<n;i++){
        vetor[i]=0;
    }
}
/*
int preencher(int n , int salto){
    int i=0,cont=1,pulo=0,k,aux=0;

    while(cont < n){
        for(i=0;i<n;i++){

            if ( vetor[i]==0 ){
                pulo++;
            }
            if(pulo==salto){
                vetor[i]=1;
                cont++;
                pulo=0;
            }
        }
    }
    while(vetor[aux]==1){
        aux++;
    }
    return aux+1;
}
*/
int outra(int n, int salto){
    int c=1,k=0,i=0;
    iniciar(n);
    while(c<n){
        while(k<salto){
            if(vetor[i]==0) k++;
            if(k!=salto) i = (i+1)%n;
        }
        vetor[i]=1;
        c++;
        k=0;
    }
    k=0;
    while(vetor[k]==1){
        k++;
    }
    return k+1;
}



int main(){
    int t,n,salto,j=1;
    cin>>t;
    while(t>0){
        cin>>n>>salto;
        cout<<"Case "<<j<<": "<<outra(n,salto)<<endl;
        j++;
        t--;
    }

    return 0;
}
