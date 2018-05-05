#include<iostream>
#include<iomanip>
using namespace std;

int t;
int matriz[15][15];

int fator(int n){
    if(n==1){
        return 1;
    }else{
        return 2*fator(--n);
    }
}

bool leitura(){
    cin>>t;
    return t!=0;
}

int qtdDigitos(int n){
    int cont=0;
    while(n>0){
        n/=10;
        cont++;
    }
    return cont;
}

void Popular(int n){
    int i,j,linha=1,k;
    for(i=0;i<n;i++){
        k=linha;
        for(j=0;j<n;j++){
            matriz[i][j]=fator(k);
            k++;
        }
        linha++;
    }
}
int main(){
    int n,i,j,dig;
    while(leitura()){
        Popular(t);
        dig = qtdDigitos(matriz[t-1][t-1]);
        for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                if(j<t-1) {
                    cout<<setw(dig)<<matriz[i][j]<<" ";
                }else{
                    cout<<setw(dig)<<matriz[i][j]<<endl;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
