#include<iostream>
using namespace std;

int main(){
    int n,i,c,m;
    c=0;
    m=0;
    for(i=1;i<=100;i++){
        cin>>n;
        if(n>m){
            c=i;
            m=n;
        }
    }
    cout<<m<<endl;
    cout<<c<<endl;
    return 0;
}
