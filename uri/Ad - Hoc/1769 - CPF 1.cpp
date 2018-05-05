#include<iostream>
using namespace std;

int toInt(char c){ // converte char pra inteiro
    return (int)c - 48;
}
int verificador(char cpf[]){
    int i,c=0,j=1;
    int f1 = 0;
    int f2 = 0;
    for(i=0;i<=10;i++){
        if(c!=3){
             f1 = f1 + j*toInt(cpf[i]); //Soma todos os 9 digitos multiplicado pelo seu fator
             f2 = f2 +(10-j)*toInt(cpf[i]);
             j++;
             c++;
        }else{
            c=0;
        }
    }
    f1 = f1%11%10;  //Resto da divisão por 11 se for igual a 10 entao %10=0
    f2 = (f2%11)%10;
    return 10*f1 + f2;
}

int main(){
    char cpf[14];
    int v;
    while(cin>>cpf){
        v = 10*toInt(cpf[12]) + toInt(cpf[13]); //Armazena o valor dos 2 ultimos digitos
        if(verificador(cpf)==v){
            cout<<"CPF valido"<<endl;
        }else{
            cout<<"CPF invalido"<<endl;
        }
    }
    return 0;
}
