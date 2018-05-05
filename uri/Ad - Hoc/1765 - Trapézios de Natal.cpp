#include<iostream>
#include<iomanip>
using namespace std;

//Devemos saber a area do trapezio (b+B)*h/2
int main(){
    int t=1,q,i;
    double b,a,s;
    while(t!=0){ // Condição de parada
        cin>>t;
        if(t!=0){
            for(i=1;i<=t;i++){
                cin>>q>>b>>a;
                s = q*((b+a)*5)/2.0; // Para cada caso e calculado a area do trapezio
                cout<<"Size #"<<i<<":"<<endl;
                cout<<"Ice Cream Used: "<<fixed<<setprecision(2)<<s<<" cm2"<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
