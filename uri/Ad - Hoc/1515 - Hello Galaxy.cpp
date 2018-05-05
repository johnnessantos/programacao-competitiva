#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool pairCompare(const pair <string, int >& A, const pair <string, int >& B){
    return A.second < B.second;
}

int main (){
    vector < pair <string , int > > Galaxy;
    pair <string , int > No;
    int i,N,A,Q;

    while(cin>>N && N!=0){
        for(i=0;i<N;i++){
            cin>>No.first>>A>>Q;
            No.second = A-Q;
            Galaxy.push_back(No);
        }
        sort(Galaxy.begin(),Galaxy.end(),pairCompare);
        cout<<Galaxy[0].first<<endl;
        Galaxy.clear();
    }
    return 0;
}
