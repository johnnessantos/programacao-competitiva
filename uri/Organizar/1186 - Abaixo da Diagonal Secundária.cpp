#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float M[12][12],somador=0.0;
    int i,j,diag=1;
    char operacao;
    cin>>operacao;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
    while(diag<=11){
        for(j=(12-diag);j<=11;j++){
            somador=somador+M[diag][j];
        }
        diag++;
    }

    if(operacao=='S'){
        cout<<fixed<<setprecision(1)<<somador<<endl;
    }
    if(operacao=='M'){
        cout<<fixed<<setprecision(1)<<somador/66.0<<endl;
    }

    return 0;
}


