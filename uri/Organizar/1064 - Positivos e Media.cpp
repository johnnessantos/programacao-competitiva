#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int i,cont=0;
    float v,soma=0;
    for(i=0;i<=5;i++){
        cin>>v;
        if(v>0){
            soma+=v;
            cont++;
        }
    }
    cout<<cont<<" valores positivos\n";
    if(cont > 0){
         cout<<fixed<<setprecision(1)<<soma/cont<<"\n";
    }else{
         cout<<"0.0\n";
    }
    return 0;
}
