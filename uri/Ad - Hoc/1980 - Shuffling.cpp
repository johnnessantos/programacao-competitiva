#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    long long int fat[16];

    fat[1] = 1;
    for(int i=2; i<=15; i++) fat[i] = i*fat[i-1];
    while(cin>>s && s.compare("0")!=0){
        cout<<fat[s.size()]<<endl;
    }
    return 0;
}
