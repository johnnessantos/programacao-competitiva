#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    string s;

    cin>>n>>m;
    while(m){
        cin>>s;
        if(s[0]=='f') n++;
        else n--;
        m--;
    }
    cout<<n<<endl;
    return 0;
}
