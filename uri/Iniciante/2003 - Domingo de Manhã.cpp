#include<iostream>
#include<cstdio>
using namespace std;

#define TERMINAL 480
int main(){
    int H,M;
    while(scanf("%d%*c%d",&H,&M)!=EOF){
        M = H*60 + M + 60;
        printf("Atraso maximo: %d\n",(M<=TERMINAL) ? 0: M-TERMINAL);
    }
    return 0;
}
