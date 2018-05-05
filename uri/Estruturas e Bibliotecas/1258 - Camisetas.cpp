#include<bits/stdc++.h>
using namespace std;

typedef struct no{
    string nome, cor;
    char tam;
}tNo;

bool sCompare(const tNo &A, const tNo &B){
    if(A.cor[0]==B.cor[0]){
        if(A.tam==B.tam){
            int m = min(A.nome.size(),B.nome.size());
            for(int i=0; i<m; i++){
                if(A.nome[i]!=B.nome[i]){
                    return A.nome[i] < B.nome[i];
                }
            }
            return false;
        }else{
            return A.tam>B.tam;
        }
    }else{
        return A.cor[0]<B.cor[0];
    }
}

int main(){
    tNo tab[60];
    int n,ln=0;

    while(cin>>n && n!=0){
        cin.ignore();
        if(ln>0) cout<<endl;
        for(int i=0; i<n; i++){
            getline(cin,tab[i].nome);
            cin>>tab[i].cor>>tab[i].tam;
            cin.ignore();
        }

        sort(tab, tab+n, sCompare);
        for(int i=0; i<n; i++){
            cout<<tab[i].cor<<" "<<tab[i].tam<<" "<<tab[i].nome<<endl;
        }
        ln++;
    }

    return 0;
}
