#include <iostream>
using namespace std;

long long int soma(long long int n){
    return (long long int)(n*(n+1))/2;
}

int main (){
    long long int a,b,adder;
    cin>>a>>b;
    adder = soma(b) - soma(a-1);
    cout<<adder<<endl;
    return 0;
}

