#include<iostream>
using namespace std;
#define C 0
#define V 1
int canos[2][10000];
int P[1000][20000];
int N,T;

int solve(int i, int r){
    if(i==N) return 0;
    if(P[i][r]!=-1) return P[i][r];
    if(r+canos[C][i]> T) {
        P[i][r] = max(P[i][r],solve(i+1,r));
        return P[i][r];
    }else{
        P[i][r] = max(P[i][r], canos[V][i]+solve(i,r+canos[C][i]));
        return max(P[i][r], solve(i+1,r) );
    }
}
int main(){

    cin>>N>>T;
    for(int i=0; i<N; i++) {
        cin>>canos[C][i]>>canos[V][i];
        for(int j=0; j<T; j++) P[i][j]= -1;
    }
    cout<<solve(0,0)<<endl;
    return 0;
}
