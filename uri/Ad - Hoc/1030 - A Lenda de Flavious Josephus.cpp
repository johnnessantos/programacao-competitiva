#include<bits/stdc++.h>
using namespace std;

int josephus(int n,int k) {
    int a=1;
    for(int i=1;i<=n;i++) a=(a+k-1)%i+1;
    return a;
}
int main(){
    int c,n,k;
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>n>>k;
        cout<<"Case "<<i<<": "<<josephus(n,k)<<endl;
    }
    return 0;
}
