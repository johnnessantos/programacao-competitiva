#include<iostream>
using namespace std;

int main(){
    int j,r,aux,jogadorVencedor = 0;

    cin>>j>>r;
    int pontosVitoria[500] = {0};
    for(int i=0; i<r; i++){
        for(int k=0; k<j; k++){
            cin>>aux;
            pontosVitoria[k] += aux;
        }
    }
    for(int i=1; i<j; i++){
        if(pontosVitoria[jogadorVencedor]<=pontosVitoria[i]) jogadorVencedor = i;
    }
    cout<<jogadorVencedor+1<<endl;

    return 0;
}
