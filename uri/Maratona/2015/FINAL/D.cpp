#include<iostream>
using namespace std;

#define B 0
#define D 1

int main(){
    int N,M,extra=0;
    int valores[] = {1,10,100,1000,10000};

    cin>>N>>M;
    int tabela[M][N+1];
    for(int i=0; i<M; i++){
        for(int j=0; j<=N; j++) cin>>tabela[i][j];
    }
    for(int i=0; i<M; i++){
        int somador = 0;
        for(int k=2; k<=N; k++) somador +=tabela[i][k];
        if(somador<tabela[i][B]){
            int maximo = 4;
            while( (valores[maximo]+somador) > tabela[i][B]) maximo--;
            if( (somador+tabela[i][D]) < tabela[i][B]){        //He won
                extra = extra+(valores[maximo]-tabela[i][D]);
            }else{
                extra += valores[maximo];
            }
        }
    }
    cout<<extra<<endl;
    return 0;
}
