#include<iostream>
using namespace std;

int main(){
    int s=1;
    while(s!=2002){
        cin>>s;
        if(s==2002){
            cout<<"Acesso Permitido"<<endl;
        }else{
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}
