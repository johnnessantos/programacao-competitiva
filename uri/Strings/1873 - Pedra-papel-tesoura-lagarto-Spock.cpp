#include<bits/stdc++.h>
using namespace std;
const char win[]= "2011012001012100102110102";
const string item[] = {"pedra", "papel", "tesoura", "lagarto", "spock"};

int busca(string x){
    int i = 0;
    while(x.compare(item[i]) != 0) i++;
    return i;
}

int main(){
    int n;
    string shel, raj;
    char r;

    cin>>n;
    while(n){
        cin>>shel>>raj;
        r = win[busca(shel)*5 + busca(raj)];
        if(r=='0') printf("sheldon\n");
        if(r=='1') printf("rajesh\n");
        if(r=='2') printf("empate\n");
        n--;
    }
    return 0;
}

