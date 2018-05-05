#include<iostream>
using namespace std;

int main(){
    int a,n,c=0;
    cin>>a>>n;
    while(n<=0){
        cin>>n;
    }
    while(n>0){
        c+=a;
        a++;
        n--;
    }
    cout<<c<<endl;
    return 0;
}
