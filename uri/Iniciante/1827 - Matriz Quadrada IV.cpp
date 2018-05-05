#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int N,p;
    short matriz[101][101];
    while(cin>>N){
        for(short i=0; i<N; i++){
            for(short j=0; j<N; j++) matriz[i][j] = 0;
        }

        for(short i=0; i<N; i++) matriz[i][i] = 2;

        p = N-1;
        for(short i=0; i<N; i++)matriz[i][p-i] = 3;


        p = N/3;
        for(short i=p; i<(N-p); i++){
            for(short j=p; j<(N-p); j++) matriz[i][j] = 1;
        }
        p = N/2;
        matriz[p][p] = 4;

        for(short i=0; i<N; i++){
            for(short j=0; j<N; j++) printf("%d",matriz[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
