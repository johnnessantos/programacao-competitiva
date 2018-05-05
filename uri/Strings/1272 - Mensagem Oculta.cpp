#include<bits/stdc++.h>
using namespace std;

string solve(string msg){
    stringstream sst;
    string wd, res="";
    sst<<msg;
    while(sst>>wd) res = res + wd[0];
    return res;
}

int main(){
    int n, t;
    string msg;

    cin>>n;
    cin.ignore();
    while(n){
        getline(cin, msg);
        cout<<solve(msg)<<endl;
        n--;
    }
    return 0;
}
