#include<iostream>
#include<cstring>
using namespace std;

int digito(char c){
    return (int )c - 48;
}

bool eTuring(char turing[]){
    int i=0,fator=1,tam;
    int a=0,b=0,c=0;
    while(turing[i]!='+'){
        a= a+(digito(turing[i])*fator);
        fator = fator*10;
        i++;
    }
    i++;fator=1;
    while(turing[i]!='='){
        b = b+(digito(turing[i])*fator);
        fator = fator*10;
        i++;
    }
    i++;fator=1;
    tam = strlen(turing);
    while(i<tam){
        c = c +(digito(turing[i])*fator);
        fator = fator*10;
        i++;
    }
    return a+b==c;
}

int main(){

    char turing[25];
    cin>>turing;
    while(strcmp(turing,"0+0=0")==1){
        if(eTuring(turing)) {
            cout<<"True"<<endl;
        }else{
            cout<<"False"<<endl;
        }
        cin>>turing;
    }
    cout<<"True"<<endl;
    return 0;
}
