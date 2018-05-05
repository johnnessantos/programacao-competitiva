#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

unsigned long long int quadrado(unsigned int n){
    unsigned long long int x = n;
    x = x*n;
    return x;
}

void Popular(int v[], int n){
    int i;
    for(i=0;i<n;i++) v[i]=0;
}

int qtdDigitos(unsigned long long int n){
    int cont=0;
    while(n>0){
        n/=10;
        cont++;
    }
    return cont;
}

int main(){
    int n,m,i,j,c=4;
    unsigned int p;
    unsigned long long int matriz[20][20];
    int espacamento[20];

    cin>>n;
    while(n>0){
        cin>>m;
        Popular(espacamento,m);
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                cin>>p;
                matriz[i][j]=quadrado(p);
                if(matriz[i][j]>matriz[espacamento[j]][j]){
                    espacamento[j]=i;
                }
            }
        }
        for(i=0;i<m;i++){
            j = espacamento[i];
            espacamento[i]=qtdDigitos(matriz[j][i]);
        }
        cout<<"Quadrado da matriz #"<<c<<":"<<endl;
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                if(j<m-1){
                    cout<<setw(espacamento[j])<<matriz[i][j]<<" ";
                }else{
                    cout<<setw(espacamento[j])<<matriz[i][j]<<endl;
                }
            }
        }
        if(n>1)cout<<endl;
        c++;
        n--;
    }
    return 0;
}
