#include<bits/stdc++.h>

using namespace std;


void solve() {
    int n, white;
    cin>>n;

    n = n*n;
    white = (n%2==0) ? int(n/2): int(n/2)+1;

    cout<<white<<" casas brancas e "<<n-white<<" casas pretas"<<endl;
}

int main() {
    solve();
    return 0;
}