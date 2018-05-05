#include<iostream>
using namespace std;

int pot(int x, int n){
    if(n==2){
        return x*x;
    }else{
        return x*x*x;
    }
}

int main(){
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<i<<" "<<pot(i,2)<<" "<<pot(i,3)<<endl;
    }
    return 0;
}
