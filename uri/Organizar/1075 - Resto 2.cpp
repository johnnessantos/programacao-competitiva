#include<iostream>
using namespace std;

int main(){
    int i,x;
    cin>>x;
    for(i=1;i<=10000;i++){
        if(i%x==2){
            cout<<i<<endl;
        }
    }
    return 0;
}
