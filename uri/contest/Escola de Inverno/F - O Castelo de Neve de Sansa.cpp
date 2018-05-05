#include<iostream>
#include<vector>
using namespace std;

bool crescente(int torre[],int ini, int fim){
    bool c = true;
    while(ini<fim){
        c = c && torre[ini]<=torre[ini+1];
        ini++;
    }
    return c;
}

bool decrescente(int torre[],int ini, int fim){
    bool d = true;
    while( ini < fim) {
        d = d && torre[ini]>=torre[ini+1];
        ini++;
    }
    return d;
}

bool vale(int torre[], int t1, int t2){
    if(t2-t1<2) return false;
    for(short i = t1+1; i<t2; i++){
        if(decrescente(torre,t1,i) && crescente(torre,i,t2)) return true;
    }
    return false;
}

int main(){

    int torre[1000];
    bool b = true;
    vector <int> picos;
    int N,K;
    cin>>N>>K;

    for(short i=0; i<N; i++) cin>>torre[i];

    for(short i=1; i<(N-1); i++){
        if(torre[i-1]<=torre[i] && torre[i]>=torre[i+1]) picos.push_back(i);
    }

    if(picos.size() == K){
        b = crescente(torre,0,picos[0]) && decrescente(torre,picos[K-1],N-1);
        if(b){
            for(short i=0; i<picos.size()-1; i++)b = b && vale(torre,picos[i], picos[i+1]);
        }
    }else{
        b=false;
    }
    if(b) cout<<"beautiful"<<endl;
    else cout<<"ugly"<<endl;
    return 0;
}
