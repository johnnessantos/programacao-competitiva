#include<bits/stdc++.h>
using namespace std;

string toString(int x){
    stringstream res;
    res<<x;
    return res.str();
}

int main(){
    int x,y;
    string aux,res;
    while(cin>>x>>y && x!=0 && y!=0){
        aux = toString(x+y);
        res = "";
        for(int i=0; i<aux.size(); i++){
            if(aux[i]!='0') res = res+aux[i];
        }
        printf("%s\n", res.data());
    }
    return 0;
}
