#include<stdio.h>
int x;
float y;
int main(){
    scanf("%d",&x);
    scanf("%f",&y);
    printf("%.3f km/l\n",x/y);
    return 0;
}
