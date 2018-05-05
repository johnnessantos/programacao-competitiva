#include<bits/stdc++.h>
using namespace std;

bool sCompare(const string &A, const string &B){
    int m = min(A.size(),B.size());
    int a,b;
    for(int i=0; i<m; i++){
        a = toupper(A[i]);
        b = toupper(B[i]);
        if(a!=b) return a < b;
    }
    return A.size()==m;
}

int main(){
    string crian[1000];
    int i = 0;
    string c;

    while(getline(cin,crian[i])){
        i++;
    }
    sort(crian, crian+i,sCompare);
    cout<<crian[i-1]<<endl;
    return 0;
}
