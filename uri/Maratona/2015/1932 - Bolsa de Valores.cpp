#include<iostream>
using namespace std;

int P[200000];
int dp[2][200000];
int N,C;
int solve(int tem, int dia){
    if(dia == N) return 0;
    if(dp[tem][dia]==-1){
        dp[tem][dia] = solve(tem, dia+1);
        if(tem!=0){
            dp[tem][dia] = max(dp[tem][dia], P[dia]+solve(0,dia+1));
        }else{
            dp[tem][dia] = max(dp[tem][dia], -P[dia]-C + solve(1,dia+1));
        }
    }
    return dp[tem][dia];
}

int main(){

    cin>>N>>C;
    for(int i=0; i<N; i++) {
        cin>>P[i];
        dp[0][i] = dp[1][i] = -1;
    }

    cout<<solve(0,0)<<endl;

    /*
    dp[0] = 0;
    for(i = 1; i < n; i++){
        dp[i] = dp[i-1];
        for(j = 0; j < i; j++){
            dp[i] = max(dp[i],P[i]-P[j]-c+dp[j]);
        }
    }
    /*
    return 0;
}
