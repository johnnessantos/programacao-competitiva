#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int N,K,i,Q,qst;
    int P[101];

    while(cin>>N>>K && (N!=0 && K!=0)){
        memset(P,0,sizeof(P));
        Q = 0;
        for(i=0;i<N;i++){
            cin>>qst;
            P[qst]++;
        }
        for(i=1;i<=100;i++) if(P[i] >= K) Q++;
        cout<<Q<<endl;
    }
    return 0;
}
