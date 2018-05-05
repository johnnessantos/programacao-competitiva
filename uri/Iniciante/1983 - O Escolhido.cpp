#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool pairCompare( const pair< int, float>& A, const pair<int, float>& B){
    return A.second>B.second;
}

int main(){
    int n,rga;
    float nota;
    vector < pair<int, float> > notas;

    cin>>n;

    while(n){
        cin>>rga>>nota;
        notas.push_back(make_pair(rga,nota));
        n--;
    }
    sort(notas.begin(), notas.end(), pairCompare);
    if(notas[0].second>=8){
        cout<<notas[0].first<<endl;
    }else{
        cout<<"Minimum note not reached"<<endl;
    }
    return 0;
}
