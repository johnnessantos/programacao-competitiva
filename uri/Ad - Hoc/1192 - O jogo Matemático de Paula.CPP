#include<iostream>
using namespace std;

int toDig(char x){   //Converte caractere em inteiro
    return (int)x-48;
}
int main(){

    string dado;
    int n;
    cin>>n;
    while(n>0){
        cin>>dado;
        if(dado[0]==dado[2]){ // Se forem iguais
            cout<<toDig(dado[0])*toDig(dado[2])<<endl;
        }else{
            if(dado[1]>='A' && dado[1]<='Z'){ //Se for maiuscula
                cout<<toDig(dado[2])-toDig(dado[0])<<endl;
            }else{
                cout<<toDig(dado[2])+toDig(dado[0])<<endl;
            }
        }
        n--;
    }

    return 0;
}
