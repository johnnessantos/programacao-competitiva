#include<iostream>
using namespace std;
int main(){
    int N,T;
    cin>>N>>T;
    int C[N], V[N];
    int dp[T+1];
    for(int i=0; i<N; i++) cin>>C[i]>>V[i];
    for(int i=0; i<=T; i++) {
        dp[i] = 0;
        for(int j=0; j<N; j++) {
            if(C[j] <= i) {
                dp[i] = max(dp[i], dp[i - C[j]] + V[j]);
            }
        }
    }
    cout<<dp[T]<<endl;

    return 0;
}
