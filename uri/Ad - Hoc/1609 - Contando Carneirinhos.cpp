#include<iostream>
#include<set>
using namespace std;

int main(){
    int i,j,t,n;
    int atual,total;
    int v[10000]; // Quantidade de carneiros maxima
    cin>>t;
    while(t>0){
        cin>>n;
        total=n; //total recebe a capacidade maxima
        for(i=0;i<n;i++){
            cin>>v[i]; //Lendo os carneiros
        }
        for(i=0;i<n;i++){
            if(v[i]!=-1){ // So remove se não for -1 porque -1 sao elemento ja removidos
                atual = v[i]; //Atual é o valor que deve ser removido caso haja iguais
                for(j=i+1;j<n;j++){ //Pega a ultima posicao +1 pra ser removidos os valores
                    if(atual == v[j]){
                        v[j]=-1;
                        total--; //A cada elemento removido diminui do total
                    }
                }
            }
        }
        cout<<total<<endl;
        t--;
    }
    return 0;
}
