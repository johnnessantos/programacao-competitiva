#include<iostream>
#include<iomanip>
using namespace std;

double turma(int notas[], int n){
    int i;
    double media, soma=0.0;
    for(i=0;i<n;i++){
        cin>>notas[i];
        soma = soma + notas[i];
    }
    media=soma/n;
    soma =0.0;
    for(i=0;i<n;i++){
        if(notas[i] > media) soma++;
    }
    return (100.0/n)*soma;
}

int main(){
    int c,n;
    int notas[1000];
    cin>>c;
    while(c>0){
        cin>>n;
        cout<<fixed<<setprecision(3)<<turma(notas,n)<<"%"<<endl;
        c--;
    }

    return 0;
}
