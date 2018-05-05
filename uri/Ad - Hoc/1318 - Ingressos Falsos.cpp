#include<iostream>
using namespace std;

int counter(int tick[], int N){
    if(N == -1) {
        return 0;
    } else {
        if (tick[N] >= 2) {
            return 1 + counter(tick, N-1);
        } else {
            return counter(tick, N-1);
        }
    }
}

int main (){
    int i,N,M,t;
    int tickets[10001];
    while (cin>>N>>M && (N!=0 && M!=0)){
        for (i=1;i<=N;i++) tickets[i] = 0; // 0 for false
        for(i=0; i<M; i++){
            cin>>t;
            tickets[t]++;
        }
        cout<<counter(tickets, N)<<endl;
    }
    return 0;
}
