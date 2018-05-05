#include<bits/stdc++.h>
using namespace std;

typedef struct no{
    int x,paridade;
}tNo;

bool vCompare(const tNo &A, const tNo &B){
    if(A.paridade == B.paridade){
        if(A.paridade==0) return A.x <= B.x;
        else return A.x > B.x;
    }else{
        return A.paridade <= B.paridade;
    }
}

int main(){
    int n;

    cin>>n;
    tNo num[n];
    for(int i=0; i<n; i++){
        cin>>num[i].x;
        num[i].paridade = num[i].x%2;
    }
    sort(num, num+n, vCompare);
    for(int i=0; i<n; i++){
        cout<<num[i].x<<endl;
    }
    return 0;
}
