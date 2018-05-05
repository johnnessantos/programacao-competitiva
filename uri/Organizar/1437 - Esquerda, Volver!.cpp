#include<iostream>
using namespace std;

int N;
bool leitura(){
    cin>>N;
    return N!=0;
}

int posicao(){
    char c;
    int i=2;
    while(N>0){
        cin>>c;
        if(c=='D'){
            i++;
        }else{
            i--;
        }
        if(i==4) i=0;
        if(i==-1) i=3;
        N--;
    }
    return i;
}

int main(){

    char v[5]="SONL";
    while(leitura()){
        cout<<v[posicao()]<<endl;
    }
    return 0;
}
