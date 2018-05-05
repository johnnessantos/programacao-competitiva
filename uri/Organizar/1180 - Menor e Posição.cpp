#include<iostream>
using namespace std;

int main(){
    int n,i,menor=0,posicao=0;
    cin>>n;
    if(n<=0){
        cout<<"Menor valor: "<<menor<<endl;
        cout<<"Posicao: "<<posicao<<endl;
    }else{
        int X[n];
        cin>>X[0];
        menor=X[0];
        posicao=0;
        for(i=1;i<n;i++){
            cin>>X[i];
            if(menor>X[i]){
                menor=X[i];
                posicao=i;
            }
        }
        cout<<"Menor valor: "<<menor<<endl;
        cout<<"Posicao: "<<posicao<<endl;
    }
    return 0;
}
