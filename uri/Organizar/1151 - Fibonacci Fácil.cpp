#include<iostream>
using namespace std;

void fib(int &a,int &b){
    int aux=b;
    b=a+b;
    a=aux;
}
int main(){
    int a=0,b=1,aux,n;
    cin>>n;
    if(n==1){
        cout<<a<<endl;
    }else{

        if(n==2){
            cout<<a<<" "<<b<<endl;
        }else{
            cout<<a<<" "<<b<<" ";
            while(n>3){
                cout<<(a+b)<<" ";
                fib(a,b);
                n--;
            }
            cout<<(a+b)<<endl;
        }
    }

    return 0;
}
