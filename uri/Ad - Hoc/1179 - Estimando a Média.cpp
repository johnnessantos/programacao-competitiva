#include<iostream>
#include<fstream>
using namespace std;

struct tNota{
    int nota;
    int qtd;
};

int main(){
    int t,n,p,aux,i,caso;
    bool s;
    tNota guga;
    ifstream in("1179.txt");
    ifstream out("1179out.txt");
    int r;

    in>>t;
    for(caso=1;caso<=t;caso++){
        in>>n;
        aux=0;
        guga.nota=0;
        guga.qtd=0; //Inicializando o contador
        for(i=0;i<n;i++){
            in>>p;
            if(p==guga.nota){
                aux++;
                if(aux>=guga.qtd){
                    guga.qtd++;
                    aux--; /* aux pode ser sempre maior, assim devo controla-lo para que no maximo seja igual apos sair. */
                }
            }else{
                aux=0;
                if(p>guga.nota){
                    guga.nota=p; //Coloca o valor do maior
                    guga.qtd=1; //seta a sua quantidade em 1
                }
            }
        }
        //cout<<"Caso #"<<caso<<": "<<guga.qtd<<endl;
        out>>r;
        if(r==guga.qtd) cout<<"certo"<<endl;
        else cout<<"errado: "<<guga.qtd<<":"<<r<<endl;
    }
    return 0;
}
