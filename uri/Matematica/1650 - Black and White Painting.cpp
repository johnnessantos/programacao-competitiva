#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c;
    while(cin>>n>>m>>c && (n!=0 || m!=0 || c!=0)){
        cout<<(n-8)*(m-8)+c<<endl;
    }
    return 0;
}
