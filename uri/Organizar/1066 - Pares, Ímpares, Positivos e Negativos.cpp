#include<iostream>
using namespace std;
int main(){
    int i,v;
    int par=0,impar=0;
    int pos=0,neg=0;
    for(i=0;i<5;i++){
        cin>>v;
        if(v%2==0){
            par++;
        }else{
            impar++;
        }
        if(v>0) pos++;

        if(v<0) neg++;
    }
    cout<<par<<" valor(es) par(es)"<<endl;
    cout<<impar<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
    return 0;
}
