#include<iostream>
#include<vector>
using namespace std;

typedef struct tNo{
    int inicio, fim, marcado;
} tPonto;

int main(){

    vector < tPonto > Pontos;
    int C,N,intervalo, contador;
    tPonto aux;

    while(cin>>C>>N){
        intervalo = (int)C/N;
        contador  = 0;
        int pts[N];
        for(int i=0; i<N; i++) cin>>pts[i];
        for(int i=0; i<N; i++) {
            aux.inicio = i*intervalo;
            aux.fim = (i+1)*intervalo;
            aux.marcado = 0;
            Pontos.push_back(aux);
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if( pts[i] >= Pontos[j].inicio || pts[i] < Pontos[j].inicio ){
                    if(Pontos[j].marcado == 0) contador++;
                    Pontos[j].marcado = 1;
                }
            }
        }
        if(contador == N) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}
