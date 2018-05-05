#include<iostream>
using namespace std;
int main(){
    int n,i,c=1;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<c<<" "<<c+1<<" "<<c+2<<" PUM"<<endl;
        c=c+4;
    }
    return 0;
}
