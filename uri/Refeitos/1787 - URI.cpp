#include<iostream>
#include<cmath>
using namespace std;

bool potencia(unsigned int x){
    return (pow(2,log2(x)) == x);
}

void inicia(unsigned int ponto[]){
    ponto[0]=0;
    ponto[1]=0;
    ponto[2]=0;
}

int main(){
    unsigned int U,R,I,N;
    unsigned int ponto[3];
    string resp, saida;
    int i,m,c;

    cin>>N;
    if(N==0) return 0;
    while(N!=0){
        inicia(ponto);
        for(i=0;i<N;i++){
            cin>>U>>R>>I;
            if(potencia(U)){
                ponto[0]++;
                if(U>R && U>I) ponto[0]++;
            }
            if(potencia(R)){
                ponto[1]++;
                if(R>U && R>I) ponto[1]++;
            }
            if(potencia(I)){
                ponto[2]++;
                if(I>U && I>R) ponto[2]++;
            }
        }
        m = 0; // Achar a posicao do maior
        c = 0; // flag para validar o vencedor
        for(i=1;i<=2;i++){
            if(ponto[m]<ponto[i]) m=i;
        }
        for(i=0;i<=2;i++){
            if(ponto[m]==ponto[i]) c++;
        }
        if(c<2){
            if(m==0) resp = "Uilton";
            if(m==1) resp ="Rita";
            if(m==2) resp ="Ingred";
        }else{
            resp = "URI";
        }
        cout<<resp<<endl;
        cin>>N;
    }

    return 0;
}
