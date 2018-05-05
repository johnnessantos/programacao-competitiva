#include<iostream>
using namespace std;

int main (){
    int i,j,n;
    int Alt[5];
    int qtd,pos;
    string alternativa = "ABCDE";

    while (cin>>n && n!=0){
        for (i = 0; i < n ; i++){
            qtd = 0;
            pos = 0;
            for(j=0; j < 5; j++){
                cin>>Alt[j];
                if (Alt[j] <= 127 ) {
                    qtd++;
                    pos = j;
                }
            }
            if (qtd == 1){
                cout<<alternativa[pos]<<endl;
            } else{
                cout<<"*"<<endl;
            }
        }
    }

    return 0;
}
