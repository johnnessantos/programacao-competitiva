#include<stdio.h>

int fator(int x, int y){
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

    int N;
    int i;
    scanf("%d",&N);
    int casos[N][2];
    for(i=0;i<N;i++){
        scanf("%d %d",&casos[i][0],&casos[i][1]);
    }
    for(i=0;i<N;i++){
        printf("%d\n",fator(casos[i][0],casos[i][1]));
    }
    return 0;
}
