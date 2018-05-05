#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    for(short i=n.size()-1; i>=0; i--) cout<<n[i];
    cout<<endl;
    return 0;
}
