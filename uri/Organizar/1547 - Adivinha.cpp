#include<iostream>
using namespace std;

int modulo(int a, int b){
    if(a<b){
        return b-a;
    }else{
        return a-b;
    }
}
int ganhou(int v[], int n , int s){
    int i,ganhador=0;
    for(i=1;i<n;i++){
        if(modulo(v[ganhador],s)>modulo(v[i],s)) ganhador = i;
    }
    return ganhador+1;
}
int main(){
    int n,q,s,i;
    int numero[10];
    cin>>n;
    while(n>0){
        cin>>q>>s;
        for(i=0;i<q;i++){
            cin>>numero[i];
        }
        cout<<ganhou(numero,q,s)<<endl;
       n--;
    }
    return 0;
}
