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
void Preencher(int n,int inicio, int valor){
    int i,j;
    for(i=inicio;i<n;i++){
        for(j=inicio;j<n;j++){
            if(i==inicio || i==n-1 || j==inicio || j==n-1){
                matriz[i][j]=valor;
            }
        }
    }
}
int main(){
    int i,j,c,v;
    int inicio;
    while(leitura()){
        c=n/2;
        inicio=0;
        v=1;
        while(c>0){
            Preencher(n-inicio,inicio,v);
            inicio++;
            v++;
            c--;
        }
        if(!paridade(n)){
            i=n/2;
            matriz[i][i] = i+1;
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
