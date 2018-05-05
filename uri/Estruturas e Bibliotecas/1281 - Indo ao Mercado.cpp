#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

int main (){
    int i,N, M,q;
    string buy;
    float price,value;
    map <string, float> Buys;

    cin>>N;
    while (N>0){
        cin>>M;
        for (i=0;i<M;i++){
            cin>>buy>>price;
            Buys[buy] = price;
        }
        value = 0.0;
        cin>>M;
        for (i=0;i<M;i++){
            cin>>buy>>q;
            value = value + (q*Buys[buy]);
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<value<<endl;
        Buys.clear();
        N--;
    }
    return 0;
}
