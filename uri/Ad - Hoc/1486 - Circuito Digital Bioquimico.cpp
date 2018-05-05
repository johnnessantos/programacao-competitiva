#include<iostream>
using namespace std;
#define vazio -1
struct No{
    int value;
    int pos;
};

int adder(int Q[], int ini, int fim){
    int ad = 0;
    for(int i=ini;i<fim;i++) ad = ad + Q[i];
    return ad;
}

int main (){
    int i,j,P,N,C,ant;
    No Nodes[1000];
    int Quantidade[1000];

    while(cin>>P>>N>>C && (P!=0 && N!=0 && C!=0)){
        for(i=0;i<N;i++){
            Quantidade[i] = 0;
        }

        for(j=0;j<P;j++){
            cin>>Nodes[j].value;
            Nodes[j].pos = vazio;
            if(Nodes[j].value==1){
                Quantidade[0]++;
                Nodes[j].pos++;
            }
        }

        for(i=1;i<N;i++){
            for(j=0;j<P;j++){
                ant = Nodes[j].value;
                cin>>Nodes[j].value;
                if(ant == 1 && Nodes[j].value==1){
                    Quantidade[Nodes[j].pos]--;
                    Nodes[j].pos++;
                    Quantidade[Nodes[j].pos]++;
                }else {
                    if (ant==0 && Nodes[j].value==1 ){
                        Nodes[j].pos++;
                        Quantidade[Nodes[j].pos]++;
                    }else{
                        if (Nodes[j].value == 0) Nodes[j].pos = vazio;
                    }
                }
            }
        }
        cout<<adder(Quantidade, C-1, N)<<endl;
    }
    return 0;
}
