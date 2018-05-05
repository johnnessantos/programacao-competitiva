#include<stdio.h>
int a,b,c;
int maior(){
    int m = (a+b+abs(a-b))/2;
    return (m+c+abs(m-c))/2;
}
int main(){
    scanf("%d %d %d",&a,&b,&c);
    printf("%d eh o maior\n",maior());
    return 0;
}
