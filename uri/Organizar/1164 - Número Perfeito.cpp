#include<iostream>
using namespace std;

bool divisor(int i,int div){
    return i%div == 0;
}

int main(){
    int n,i,s;
    unsigned int x;
    cin>>n;
    while(n>0){
        cin>>x;
        s=0;
        for(i=1;i<x;i++){
            if(divisor(x,i)){
               s=s+i;
            }
        }
        if(s==x){
            cout<<x<<" eh perfeito"<<endl;
        }else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
        n--;
    }
    return 0;
}
