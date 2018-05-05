#include<iostream>
using namespace std;

struct Tno{
    int v[5];
    int tam;
};

void Exibir(Tno &vetor, bool par){
    int i;
    if(par){
        for(i=0;i<vetor.tam;i++){
            cout<<"par["<<i<<"] = "<<vetor.v[i]<<endl;
        }
    }else{
        for(i=0;i<vetor.tam;i++){
            cout<<"impar["<<i<<"] = "<<vetor.v[i]<<endl;
        }
    }
    vetor.tam=0;
}

bool numeroPar(int n){
    return n%2 == 0;
}

bool cheio (Tno vetor ){
    return vetor.tam==5;
}

int main(){

    Tno par;
    par.tam=0;
    Tno impar;
    impar.tam=0;
    int n,k;
    for(k=1;k<=15;k++){
        cin>>n;
        if(numeroPar(n)){
            par.v[par.tam]=n;
            par.tam++;
        }else{
            impar.v[impar.tam]=n;
            impar.tam++;
        }
        if(cheio(par)){
           Exibir(par,true);
        }
        if(cheio(impar)){
            Exibir(impar,false);
        }
    }

    Exibir(impar,false);
    Exibir(par,true);

    return 0;
}
