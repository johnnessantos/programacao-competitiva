#include<stdio.h>
int n;
int ced[7]={100,50,20,10,5,2,1};
void Notas(int x,int i){
    if(i == 6){
        printf("%d nota(s) de R$ %d,00\n",x,ced[i]);
    }else{
        printf("%d nota(s) de R$ %d,00\n",x/ced[i],ced[i]);
        Notas(x%ced[i],(i+1));

    }
}
int main(){
    scanf("%d",&n);
    Notas(n,0);

    return 0;
}
