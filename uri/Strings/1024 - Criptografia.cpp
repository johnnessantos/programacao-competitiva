#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char mensagem[1001]; // mensagem a criptografar
    int i,j,N,cnv,tam;
    char c; // Auxilia na inversao

    cin>>N;
    cin.ignore();
    while(N>0){
        cin.getline(mensagem, 1001);
        tam = strlen(mensagem);
        for(i=0;i<tam; i++){
            if(isalpha(mensagem[i])){ // Se for letra faz a primeira parte
                mensagem[i]+=3;
            }
        }
        i=0; // Trecho de codigo pra inverter a string
        j = tam-1;
        while(i<j){
            c = mensagem[i];
            mensagem[i]=mensagem[j];
            mensagem[j]=c;
            i++;
            j--;
        }

        for(i=tam/2;i<tam;i++) mensagem[i]=mensagem[i]-1; //move a esquerda um carcter da metade em diante
        cout<<mensagem<<endl;
        N--;
    }
    return 0;
}
