#include<iostream>
using namespace std;

bool divisor(int i,int div){
    return i%div == 0;
}

int main(){
    int n,x,i;
    bool naoPrimo;
    cin>>n;
    while(n>0){
        cin>>x;
        i=2;
        naoPrimo = false;
        while( i<x && !naoPrimo){
            naoPrimo = naoPrimo || divisor(x,i);
            i++;
        }
        if(!naoPrimo){
            cout<<x<<" eh primo"<<endl;
        }else{
            cout<<x<<" nao eh primo"<<endl;
        }
        n--;
    }
    return 0;
}
