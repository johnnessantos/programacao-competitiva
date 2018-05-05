#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float M[12][12],somador=0.0;
    int i,j,diagonal=1;
    char operacao;
    cin>>operacao;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
    while(diagonal<=11){
        for(i=0;i<diagonal;i++){
            somador=somador+M[diagonal][i];
        }
        diagonal++;
    }

    if(operacao=='S'){
        cout<<fixed<<setprecision(1)<<somador<<endl;
    }
    if(operacao=='M'){
        cout<<fixed<<setprecision(1)<<somador/66.0<<endl;
    }

    return 0;
}

