#include<iostream>
using namespace std;

bool divisor(int x, int i){
    return x%i==0;
}

int main(){
    int n,i;
    cin>>n;
    if(n>0){
        for(i=1;i<=n;i++){
            if(divisor(n,i)) cout<<i<<endl;
        }
    }
    return 0;
}
