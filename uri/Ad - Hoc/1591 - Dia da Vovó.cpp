#include<bits/stdc++.h>
using namespace std;

int busca(char caca[][50], int L, int C, string b){
    int i,j,p,cont = 0;
    for(i=0; i<L; i++){
        for(j=0; j<=C-b.size(); j++){
            p = 0;
            while(p < b.size()){
                if(b[p]==caca[i][j+p]) p++;
                else p = 100;
            }
            if(p==b.size()) cont++;
        }
    }
    if(b.size()==1) return cont;
    for(i=0; i<=L-b.size(); i++){
        for(j=0; j<C; j++){
            p = 0;
            while(p < b.size()){
                if(b[p]==caca[i+p][j]) p++;
                else p = 100;
            }
            if(p==b.size()) cont++;
        }
    }
    return cont;
}
int main(){
    char caca[50][50];
    int T, L, C, P;
    string bus;

    cin>>T;
    while(T){
        cin>>L>>C;
        for(int i=0; i<L; i++){
            for(int j=0; j<C; j++){
                cin>>caca[i][j];
            }
        }
        cin>>P;
        while(P){
            cin>>bus;
            cout<<busca(caca, L, C, bus)<<endl;
            P--;
        }
        T--;
    }
    return 0;
}
