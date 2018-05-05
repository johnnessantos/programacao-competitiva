#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float M[12][12],somador=0.0;
    int coluna,i,j;
    char operacao;
    cin>>coluna;
    cin>>operacao;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
    for(i=0;i<12;i++){
        somador=somador+M[i][coluna];
    }
    if(operacao=='S'){
        cout<<fixed<<setprecision(1)<<somador<<endl;
    }
    if(operacao=='M'){
        cout<<fixed<<setprecision(1)<<somador/12<<endl;
    }

    return 0;
}

