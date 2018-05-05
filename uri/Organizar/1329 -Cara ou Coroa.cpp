#include<iostream>
using namespace std;

int N;
bool leitura(){
    cin>>N;
    return N!=0;
}

int main(){

    int vencedor,i,joao,maria;

    while(leitura()){
        joao = 0;
        maria = 0;
        for(i=0;i<N;i++){
            cin>>vencedor;
            if(vencedor == 0){
                maria++;
            }else{
                joao++;
            }
        }
        cout<<"Mary won "<<maria<<" times and John won "<<joao<<" times"<<endl;
    }
    return 0;
}
