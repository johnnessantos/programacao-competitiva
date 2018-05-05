#include<iostream>
#include<fstream>
using namespace std;
#define max 10000

int sorte(int dado[], int n , int x){ // Funcao para verificar se o elemento esta no vetor
    int i=0;
    while(i<n && x!=dado[i]){
        i++;
    }
    return i;
}

int main(){
    int n,q,i,v,r,j;
    int dado[max];
    ifstream in("entrada.txt");
    in>>n>>q;
    j=1;
    while(n!=0 && q!=0){
        for(i=0;i<n;i++)in>>dado[i]; // leitura dos dados

        cout<<"CASE# "<<j++<<":"<<endl;
        for(i=1;i<=q;i++){
            in>>v;
            r = sorte(dado,n,v);
            if(r==n) cout<<v<<" not found"<<endl;
            else cout<<v<<" found at "<<r<<endl;
        }
        in>>n>>q;
    }

    return 0;
}
