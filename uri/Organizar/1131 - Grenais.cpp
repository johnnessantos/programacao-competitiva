#include<iostream>
using namespace std;
int inter=0,gremio=0,empate=0;

void Partida(){
    int x,y;
    cin>>x>>y;
    if(x==y){
        empate++;
    }else{
        if(x>y){
            inter++;
        }else{
            gremio++;
        }
    }
}

bool novoGrenal(){
    int op;
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>op;
    if(op==1){
        return true;
    }else{
        return false;
    }

}
int main(){
    int totalPartidas=0;
    Partida();
    totalPartidas++;
    while(novoGrenal()){
        Partida();
        totalPartidas++;
    }
    cout<<totalPartidas<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<empate<<endl;
    if(inter>gremio){
        cout<<"Inter venceu mais"<<endl;
    }else{
        if(gremio>inter){
            cout<<"Gremio venceu mais"<<endl;
        }else{
            cout<<"Nao houve vencedor"<<endl;
        }
    }

    return 0;
}
