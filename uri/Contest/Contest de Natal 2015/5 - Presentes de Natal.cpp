#include<bits/stdc++.h>
using namespace std;

typedef struct no{
    string nome;
    float preco;
    int pref;
}tNo;

bool vCompare(const tNo &A, const tNo &B){
    if(A.pref==B.pref){
        if(A.preco==B.preco){
            int m = min(A.nome.size(),B.nome.size());
            for(int i=0; i<m; i++){
                if(A.nome[i]!=B.nome[i]){
                    return A.nome[i] < B.nome[i];
                }
            }
            return false;
        }else{
            return A.preco<B.preco;
        }
    }else{
        return A.pref>B.pref;
    }
}

tNo make(string n, float p, int pref){
    tNo aux;
    aux.nome = n;
    aux.preco = p;
    aux.pref = pref;
    return aux;
}
int main(){
    tNo tab[100];
    string nPessoa,nPresente;
    int n,pref,ln=0;
    float preco;

    while(cin>>nPessoa>>n){
        if(ln>0) cout<<endl;
        for(int i=0; i<n; i++){
            getline(cin,nPresente);
            scanf("%f %d ", &preco, &pref);
            tab[i] = make(nPresente,preco,pref);
        }

        sort(tab, tab+n, vCompare);
        cout<<"Lista de "<<nPessoa<<endl;
        for(int i=0; i<n; i++){
            cout<<tab[i].nome<<" - R$"<<tab[i].preco<<endl;
        }
        ln++;
    }

    return 0;
}
