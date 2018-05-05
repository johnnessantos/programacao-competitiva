#include<iostream>
#include<cmath>
using namespace std;

unsigned long long int graos(int a){
    double x;
    x = pow(2,a);
    return x/12000;
}

int main(){
    int a,n;

    cin>>n;
    while(n>0){
        cin>>a;
        cout<<graos(a)<<" kg"<<endl;
        n--;
    }
    return 0;
}
