#include<iostream>
using namespace std;
int cas(float x){
    int a;
    if(x>1.0){
        a=x;
        return ((x*100) - (a*100)) + 1;
    }else{
        return (x*100) - (a*100);
    }
}
int main(){
    float n;
    int notas;
    int moedas;

    cin>>n;
    notas=n;
    moedas=cas(n);
    cout<<moedas;

    /*cout<<"NOTAS:\n";
    cout<<notas/100<<" nota(s) de R$ 100,00\n";
    notas=notas%100;
    cout<<notas/50<<" nota(s) de R$ 50,00\n";
    notas=notas%50;
    cout<<notas/20<<" nota(s) de R$ 20,00\n";
    notas=notas%20;
    cout<<notas/10<<" nota(s) de R$ 10,00\n";
    notas=notas%10;
    cout<<notas/5<<" nota(s) de R$ 5,00\n";
    notas=notas%5;
    cout<<notas/2<<" nota(s) de R$ 2,00\n";
    notas%=2;
    cout<<"MOEDAS:\n";
    cout<<notas<<" moeda(s) de R$ 1.00\n";
    cout<<moedas/50<<" moeda(s) de R$ 0.50\n";
    moedas=moedas%50;
    cout<<moedas/25<<" moeda(s) de R$ 0.25\n";
    moedas=moedas%25;
    cout<<moedas/10<<" moeda(s) de R$ 0.10\n";
    moedas=moedas%10;
    cout<<moedas/5<<" moeda(s) de R$ 0.05\n";
    moedas=moedas%5;
    cout<<moedas<<" moeda(s) de R$ 0.01\n";*/

    return 0;
}
