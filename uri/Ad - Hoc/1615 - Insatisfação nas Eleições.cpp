#include<iostream>
using namespace std;

int main (){
    int i,T,N,M,c;
    int Cand[1001];

    cin>>T;
    while(T){
        cin>>N>>M;
        for(i=1;i<=N;i++) Cand[i]=0;
        for(i=0;i<M;i++){
            cin>>c;
            Cand[c]++;
        }
        i = 1;
        c = (int)M/2;
        while(i<=N && Cand[i]<=c) i++;
        if(i<=N) cout<<i<<endl;
        else cout<<-1<<endl;
        T--;
    }
    return 0;
}
