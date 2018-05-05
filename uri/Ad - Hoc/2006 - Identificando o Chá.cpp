#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, cha[5];

    cin>>t;
    for(int i=0; i<5; i++)cin>>cha[i];
    cout<<count(cha, cha+5, t)<<endl;
    return 0;
}
