#include<iostream>
#include<string>
using namespace std;

int conv(char c){
    if(isupper((int)c)) return (int)(c - 'A');
    else return (int)(c - 'a');
}

int main(){
    string dados,msg;
    string minuscula = "",maiuscula= "";
    for(char c = 'a'; c<='z'; c++) minuscula +=c;
    for(char c = 'A'; c<='Z'; c++) maiuscula +=c;

    while(getline(cin,dados)){
        msg = "";
        for(int i=0; i<dados.size(); i++){
            if(isalpha((int)dados[i])){
                if(isupper((int)dados[i]))msg +=maiuscula[((conv(dados[i]) + 13)%26)];
                else if(islower((int)dados[i]))msg +=minuscula[((conv(dados[i]) + 13)%26)];
            }else{
                msg +=dados[i];
            }
        }
        cout<<msg<<endl;
    }
    return 0;
}
