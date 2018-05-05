#include<iostream>
#include<stack>
using namespace std;
#define ERRO -1
int main(){
    int N, K;
    int C,S,aux;
    stack < pair<int, int > > Est;
    bool possivel;
    while(cin>>N>>K && N!=0 && K!=0){
        Est.push(make_pair(ERRO,ERRO));
        possivel = true;
        for(short i=0; i<N; i++){
            cin>>C>>S;
            while(Est.size()>1 && C >= Est.top().second ) Est.pop();
            Est.push(make_pair(C,S));
        }

        while(Est.size() > 2 && possivel){
            aux = Est.top().second;
            Est.pop();
            possivel = possivel && (aux < Est.top().second);
        }
        if(possivel) cout<<"Sim"<<endl;
        else cout<<"Nao"<<endl;
        while(!Est.empty()) Est.pop();
    }
    return 0;
}
