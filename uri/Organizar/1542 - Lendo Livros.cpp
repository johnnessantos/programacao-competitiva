#include<iostream>
using namespace std;
int Q,D,P;

bool leitura(){
    cin>>Q;
    if(Q!=0){
        cin>>D;
        if(D!=0){
            cin>>P;
        }
    }
    return Q!=0 && D!=0 && P!=0;
}

int mmc(){
    if(P%Q==0) return P;
    if (Q%P==0) return Q;
    return P*Q;
}

int paginas(){
    int m = mmc();
    return (m*D)/((m/Q) - (m/P));
}

int main(){
    int pg;
    while(leitura()){
        pg = paginas();
        if(pg==1){
            cout<<paginas()<<" pagina"<<endl;
        }else{
            cout<<paginas()<<" paginas"<<endl;
        }

    }
    return 0;
}
