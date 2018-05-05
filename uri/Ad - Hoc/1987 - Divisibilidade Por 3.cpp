#include<iostream>
using namespace std;

int toI(char c){ return (int)c - '0'; }
int conv(string x){
    int t=0;
    for(int i=0; i<x.size(); i++) t = t+ toI(x[i]);
    return t;
}

int main(){
    int n;
    string x;

    while(cin>>n>>x){
        n = conv(x);
        if(n%3==0) cout<<n<<" sim"<<endl;
        else cout<<n<<" nao"<<endl;
    }
}
