#include<bits/stdc++.h>
using namespace std;

int dp[100001];
int solve(int n){
    if(dp[n]!=-1){
        return dp[n];
    }else{
        if(n%3==0) dp[n] = n/3+solve(n/3);
        else dp[n] = ((n/3)+1) + solve((n/3)+1);
        return dp[n];
    }
}


int main(){
    int n;

    for(int i=1;i<=100000; i++) dp[i] = -1;
    dp[1] = 0;
    while(cin>>n && n!=0){
        cout<<solve(n)<<endl;
    }
    return 0;
}
