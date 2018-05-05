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
    int q,c;
    cin>>n;
    for(i=1;i<=n;i++){
        q=pot(i,2);
        c=pot(i,3);
        cout<<i<<" "<<q<<" "<<c<<endl;
        cout<<i<<" "<<(q+1)<<" "<<(c+1)<<endl;
    }
    return 0;
}

