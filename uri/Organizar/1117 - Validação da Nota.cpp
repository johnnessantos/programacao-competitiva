#include<iostream>
#include<iomanip>
using namespace std;

float lerNota(){
    float nota;
    cin>>nota;
    while(nota<0 || nota>10){
        cout<<"nota invalida"<<endl;
        cin>>nota;
    }
    return nota;
}

bool opValdia(int &op){
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>op;
    while(op!=1 && op!=2){
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>op;
    }
    if(op==1){
        return true;
    }else{
        return false;
    }

}

int main(){
    int op;
    float media;
    media=lerNota() + lerNota();
    media=media/2;
    cout<<fixed<<setprecision(2)<<"media = "<<media<<endl;

    while(opValdia(op)){
        media=lerNota() + lerNota();
        media=media/2;
        cout<<fixed<<setprecision(2)<<"media = "<<media<<endl;
    }

    return 0;
}
