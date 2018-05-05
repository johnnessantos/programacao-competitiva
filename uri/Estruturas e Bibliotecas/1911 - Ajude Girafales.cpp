#include<bits/stdc++.h>
using namespace std;

bool isEqual(string nome, string ass){
    if(nome.size()!=ass.size()){
        return false;
    }else{
        int dif = 0;
        for(int i=0; i<nome.size(); i++){
            if(nome[i]!=ass[i]) dif++;
        }
        return dif<2;
    }
}

int main(){
    map <string, string> lista;
    string ass, nome;
    int contador,m,n;

    while(cin>>m && m!=0){
        contador = 0;
        for(int i=0; i<m; i++){
            cin>>nome>>ass;
            lista[nome] = ass;
        }
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>nome>>ass;
            if(!isEqual(lista[nome], ass)) contador++;
        }
        printf("%d\n",contador);
    }
    return 0;
}
