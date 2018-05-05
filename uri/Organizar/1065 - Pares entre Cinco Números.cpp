#include<iostream>
using namespace std;
int main(){
    int i,c=0,v;
    for(i=0;i<5;i++){
        cin>>v;
        if(v%2==0) c++;
    }
    cout<<c<<" valores pares"<<endl;
    return 0;
}
