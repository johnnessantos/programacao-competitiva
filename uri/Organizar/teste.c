#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    /*int *v=malloc(100*sizeof(int));
    //int v[100];
    int i;
    for(i=0;i<100;i++) v[i]=0;
    return 0;*/
    unsigned int x = INT_MAX + 1;
    printf("Int: %d Valor Maximo: %ld\n",sizeof(int),x);
    printf("Uns: %d Valor Maximo: %ld\n",sizeof(unsigned int),x);
}
