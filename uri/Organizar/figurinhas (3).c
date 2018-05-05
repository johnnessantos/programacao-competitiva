#include<stdio.h>
#include<stdlib.h>
int N;
int i;
int x,y;
int euclides_r(int m, int n){
    if (n==0) return m;
    return euclides_r (n, m % n);
}
int main(){
    scanf("%d",&N);
    int *casos=malloc(N*sizeof(int));
    for(i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        casos[i]=euclides_r(x,y);
    }
    for(i=0;i<N;i++) printf("%d\n",casos[i]);
    return 0;
}
