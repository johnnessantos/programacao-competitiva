#include<iostream>
using namespace std;
int v;
int dentro(int n){
    if(n==0){
        return 0;
    }else{
        cin>>v;
        if(v>=10 && v<=20){
            return 1 + dentro(--n);
        }else{
            return dentro(--n);
        }
    }
}
int main(){
    int n,total;
    cin>>n;
    total=dentro(n);
    cout<<total<<" in"<<endl;
    cout<<(n - total)<<" out"<<endl;
    return 0;
}

