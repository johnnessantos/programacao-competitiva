#include<stdio.h>

long int fatorial(int x){
    int fat=1;
    if(x <=1){
        return fat;
    }else{
        int i;
        for(i=2;i<=x;i++){
            fat*=i;
        }
    }
    return fat;
}
int main(){


    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(unsigned long int));
    printf("%d\n",sizeof(char));

    return 0;
}
