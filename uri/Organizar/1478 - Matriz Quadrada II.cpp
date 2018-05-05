#include<iostream>
#include<iomanip>
using namespace std;
int n;
int matriz[100][100];

bool leitura(){
    cin>>n;
    return n!=0;
}

bool paridade(int n){
    return n%2==0;
}

void diagonal(int linha, int coluna , int valor ){
    while(linha != n || coluna != n){
        matriz[linha][coluna]=valor;
        linha++;
        coluna++;
    }
}


int main(){
    int i,j,aux;
    while(leitura()){
        /*i=4;
        while(i>0){
            diagonal(i,0,i);
            i--;
        }

        aux=n-1;
        while(aux>=0){
            diagonal(0,i,n);
            aux--;
        }*/
        diagonal(0,0,1);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j==n-1){
                    cout<<setw(3)<<matriz[i][j]<<endl;
                }else{
                    cout<<setw(3)<<matriz[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
