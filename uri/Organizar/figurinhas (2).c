#include<stdio.h>
#include<stdlib.h>
int N;
int i;
int x,y;
int fator(int x,int y){
    int men =x;
    if(men>y){
        men=y;
    }
    while( (x%men!=0) || (y%men!=0)){
        men--;
    }
    return men;
}
int main(){
    scanf("%d",&N);
    int *casos=malloc(N*sizeof(int));
    for(i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        casos[i]=fator(x,y);
    }
    for(i=0;i<N;i++) printf("%d\n",casos[i]);
    return 0;
}
