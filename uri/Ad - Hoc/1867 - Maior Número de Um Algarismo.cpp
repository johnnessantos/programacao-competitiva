#include<iostream>
using namespace std;

int toI(char c){ return (int)c - '0'; }
int conv(string x){
    int s = 0;
    for(int i=0; i<x.size(); i++) s = s + toI(x[i]);
    return s;
}
int uno(int n){
    if(n<=9) return n;
    return n%10 + uno(n/10);
}

int main(){
    string n,m;
    int n1,m1;
    while(cin>>n>>m && (n.compare("0")!=0 || m.compare("0")!=0)){
        n1 = conv(n);
        while(n1>9) n1 = uno(n1);
        m1 = conv(m);
        while(m1>9) m1 = uno(m1);
        if(n1==m1) cout<<0<<endl;
        else cout<<((n1>m1)?1:2)<<endl;
    }
    return 0;
}
