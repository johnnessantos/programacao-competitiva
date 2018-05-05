#include<bits/stdc++.h>
using namespace std;
char INICIO[4] = {'F','A','C','E'};

void insere(vector<char> &pilha, char let[4]){ for(int i=0;i<4;i++) pilha.push_back(let[i]); }
void rem(vector<char> &pilha){ for(int i=0; i<4; i++) pilha.pop_back(); }

int main(){
    vector <char> pilha;
    char letras[4];
    int n,c=0;
    bool ehInv;

    insere(pilha,INICIO);
    cin>>n;
    while(n){
        ehInv = true;
        for(int i=0; i<4; i++) cin>>letras[i];
        for(int i=1; i<=4; i++) {
            ehInv = ehInv && pilha[pilha.size()-i]==letras[i-1];
        }
        if(ehInv) {
            c++;
            rem(pilha);
        }else{
            insere(pilha,letras);
        }
        if(pilha.size()==0) insere(pilha,INICIO);
        n--;
    }
    cout<<c<<endl;
    return 0;
}
