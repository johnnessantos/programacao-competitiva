#include<iostream>
using namespace std;

int main(){
    int tomada[5];
    int pluge[5];
    int i;
    bool compativel = true;

    for(i=0;i<5;i++) cin>>tomada[i]; /* Leitura de todos os pinos da tomada */
    for(i=0;i<5;i++) cin>>pluge[i]; /* Leitura dos plugs*/

    /** Logica comparar todos os pinos, se for iguais é falso.*/

    for(i=0;i<5;i++){ /* Leitura dos plugs*/
        compativel = compativel && (tomada[i]!=pluge[i]);
    }
    if(compativel){
        cout<<"Y"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    return 0;
}
