#include<iostream>
#include<iomanip>
using namespace std;
int matriz[70][70];

void preencher(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j+i==n-1){
                matriz[i][j]=2;
            }else{
                if(i==j){
                     matriz[i][j]=1;
                }else{
                    matriz[i][j]=3;
                }
            }
        }
    }
}
int main(){
    int n;
    int i,j;
    while(cin>>n){
        preencher(n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j==n-1){
                    cout<<matriz[i][j]<<endl;
                }else{
                    cout<<matriz[i][j];
                }
            }
        }
    }
    return 0;
}
