#include<stdio.h>
#include<math.h>
float x,y,x2,y2;
double valor;
float quad(float q){
    return q*q;
}
int main(){
    scanf("%f %f",&x,&y);
    scanf("%f %f",&x2,&y2);
    valor = quad(x2-x)+ quad(y-y2);
    printf("%.4f\n",sqrt(valor));
    return 0;
}
