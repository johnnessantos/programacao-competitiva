#include<stdio.h>
#include<stdlib.h>

void shellSort(int vet[], int tam) {
    int i , j , value;
    int gap = 1;
    while(gap < tam) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tam; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }
}
int procura (int v[], int N , int x){
    int i=0;
    i=0;
    while(i<N && v[i]!=x){
        i++;
    }
    return i;
}

int main () {
    int dados[10000];
    int i,N,Q,P,r;
    int caso = 1;
    scanf("%d %d",&N,&Q);
    while(N!=0 && Q!=0){
        for (i=0;i<N;i++)scanf("%d",&dados[i]);
        shellSort(dados,N);
        printf("CASE# %d:\n",caso);
        caso++;
        for(i=0;i<Q;i++){
            scanf("%d",&P);
            r = procura(dados,N,P);
            if(r==N) {
                printf("%d not found\n",P);
            }else {
                printf("%d found at %d\n",P,r+1);
            }
        }
        scanf("%d %d",&N,&Q);
    }
    return 0;
}
