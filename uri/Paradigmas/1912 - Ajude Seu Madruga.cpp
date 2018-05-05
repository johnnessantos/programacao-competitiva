#include<bits/stdc++.h>
using namespace std;
int elem[100000];

float soma(float corte, int n){
    int i = n-1;
    float s = 0;
    while(elem[i]>corte){
        s = s + (elem[i]-corte);
        i--;
    }
    return s;
}

float busca_binaria(int a , int n){
    float in=0, fim=elem[n-1], meio=0, s=10001;

    while( abs(s-a)> 0.00001 ){
        meio = (in + fim)/2;
        s = soma(meio, n);
        if(s>a) in = meio;
        else fim = meio;
    }
    return meio;
}
int main(){
    int n,a, total;

    while(cin>>n>>a && n!=0 && a!=0){
        total = 0;
        for(int i=0; i<n; i++) cin>>elem[i];
        for(int i=0; i<n; i++) total +=elem[i];
        if(total==a){
            printf(":D\n");
        }else{
            if(a > total){
                printf("-.-\n");
            }else{
                sort(elem, elem+n);
                printf("%.4f\n", busca_binaria(a, n));
            }
        }
    }

    return 0;
}
