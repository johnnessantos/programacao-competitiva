#include<stdio.h>
int main(){
    float hr,vl;
    int nmr;
    scanf("%d",&nmr);
    scanf("%f",&hr);
    scanf("%f",&vl);
    printf("NUMBER = %d\n",nmr);
    printf("SALARY = U$ %.2f\n",hr*vl);
    return 0;
}
