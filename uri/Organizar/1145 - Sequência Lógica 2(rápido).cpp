#include<iostream>
using namespace std;
int main(){
    int x,y,i,j,c=1;
    cin>>x>>y;
    int t,p;
    t=y/x;
    p=y%x;


    for(i=1;i<=t;i++){
        j=1;
        while(j<x){
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<c<<endl;
        c++;
    }

    return 0;
}

