#include<iostream>
using namespace std;
int N;
int P[1000][1000];
/*
int solve(int i, int j){
    if(i==N) return P[i][j];
    else{
        return P[i][j]+max(solve(i+1,j), solve(i+1 , j+1));
    }
}
*/
int main(){

    while(cin>>N && N!=0){
        for(int i=0; i<N; i++){
            for(int j=0; j<=i; j++) cin>>P[i][j];
        }
        for(int i=N-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                P[i][j] = P[i][j] + max(P[i+1][j], P[i+1][j+1]);
            }
        }
        cout<<max(0,P[0][0])<<endl;
    }
    return 0;
}
