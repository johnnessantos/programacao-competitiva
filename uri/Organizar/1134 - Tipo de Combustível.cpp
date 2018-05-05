#include<iostream>
using namespace std;

int opcaoValida(){
    int opt;
    cin>>opt;
    while(opt<1 || opt>4){
        cin>>opt;
    }
    return opt;
}
int main(){

    int alc=0,gas=0,die=0;
    int opt;
    opt=opcaoValida();
    while(opt!= 4){
        if(opt==1){
            alc++;
        }else{
            if(opt==2){
                gas++;
            }else{
                if(opt==3){
                    die++;
                }
            }
        }
        opt=opcaoValida();
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alc<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<die<<endl;
    return 0;
}
