#include<iostream>
#include<iomanip>
using namespace std;
int n;
int matriz[100][100];

bool leitura(){
    cin>>n;
    return n!=0;
}


void diagonal(int linha, int coluna , int valor ){
    while(linha != n && coluna != n){
        matriz[linha][coluna]=valor;
        linha++;
        coluna++;
    }
}


int main(){
    int i,j,aux;
    while(leitura()){
        i=n-1;
        while(i>=0){
            diagonal(i,0,i+1);
            diagonal(0,i,i+1);
            i--;
        }
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
