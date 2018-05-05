#include<bits/stdc++.h>
using namespace std;

string solve(string msg){
    stringstream sst;
    string wd, res="";
    sst<<msg;
    while(sst>>wd){
        char c = tolower(wd[0]);
        res = res + c;
    }
    return res;
}

int main(){
    string msg;
    int i, contador;
    while(getline(cin, msg)){
        msg = solve(msg) + ' ';
        i = 1;
        contador = 0;
        while(i<msg.size()){
            if(msg[i-1]==msg[i]){
                contador++;
                while(i<msg.size() && msg[i-1]==msg[i]) i++;
            }else{
                i++;
            }
        }
        printf("%d\n", contador);
    }
    return 0;
}
