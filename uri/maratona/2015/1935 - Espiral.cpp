#include<iostream>
using namespace std;

typedef long long int lli;
// Numero de feijoes cor aspiral(casca) = 4*(N-1) para N>1
lli qtdCascas(lli N,lli i) {
    if(i>(N/2)) return N*N;
    else return (i*4)*(N-i);
}

int buscaBinaria(lli N, lli B){
    lli li = 1;
    lli ls = N;
    lli meio = (ls+li)/2;
    while((ls-li)>1){
        if(qtdCascas(N,meio)>=B) ls = meio;
        else li = meio;
        meio = (ls+li)/2;
    }
    if(B<=qtdCascas(N,li)) return li;
    else return ls;
}

int main(){
    int C=1,L=1,i;
    lli N,B;
    cin>>N>>B;
    C = L = buscaBinaria(N,B);  //Busca binaria para descobrir com B feijoes quantas cascas sao preenchidas completamente
    B = B - qtdCascas(N,C-1);   //Remocao de feijoes de acordo com a quantidade de cascas preenchidas
    N = N - 2*(C-1);            //2*(C-1) eh a remocao das linhas e colunas do tabuleiro
    if(B>=N){
        C += (N-1);             // N-1 porque inicialmente a posicao (L,C) nao tem feijao
        B -= N;
    }else{
        C +=(B-1);              // B-1 porque inicialmente a posicao (L,C) nao tem feijao
        B=0;
    }
    if(B!=0 && B>=N-1){
        L += (N-1);
        B -= (N-1);
    }else{
        L +=B;
        B=0;
    }
    if(B!=0 && B>=N-1){
        C -= (N-1);
        B -= (N-1);
    }else{
        C -=B;
        B=0;
    }
    if(B!=0 && B>=N-2){
        L -= N-2;
        B -= (N-2);
    }else{
        L -=B;
        B=0;
    }
    cout<<L<<" "<<C<<endl;
    return 0;
}
