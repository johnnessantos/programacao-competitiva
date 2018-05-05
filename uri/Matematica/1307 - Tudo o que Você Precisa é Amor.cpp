#include <iostream>
#include <cstdio>
using namespace std;

int mdc(int a, int b){
    if(b==0) return a;
    else return mdc(b,a%b);
}

int strbi(string x){
    int s = 0,f=1;
    for(int i=(x.size()-1); i>=0; i--){
        if(x[i] == '1') s += f;
        f = (f<<1);
    }
    return s;
}

int main (){
    string s1, s2;
    int n,i=1;

    cin>>n;
    while(i<=n){
        cin>>s1>>s2;
        if( mdc(strbi(s1) , strbi(s2)) != 1 )printf("Pair #%d: All you need is love!\n", i);
        else printf("Pair #%d: Love is not all you need!\n", i);
        i++;
    }

    return 0;
}
