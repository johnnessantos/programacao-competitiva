#include<iostream>
#include<set>
using namespace std;

typedef struct tP{
    int par,impar;
} tParidade;

int main(){

    cout<<c.size()<<endl;
    int N,K;

    cin>>N>>K;
    tParidade paridade[K];
    int apostas[N][K];

    for(int i=0; i<K; i++) paridade[i].par = paridade[i].impar = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++) cin>>apostas[N][K];
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            if(apostas[j]%2 == 0) paridade[j].par = 1;
            else paridade[j].impar = 1;
        }
    }*/

    return 0;
}
