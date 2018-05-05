#include <stdio.h>

int main(){
    int n;
    char mat[101];
    scanf("%d",&n);
    while(n>0){
        scanf("%^[\n]s", mat);
        setbuf(stdin, NULL);
        n--;
    }
    printf("Ciencia da Computacao\n");
    return 0;
}
