#include<iostream>
using namespace std;
int x;
bool leitura(){
    cin>>x;
    return x!=0;
}

int main(){
    int i;
    while(leitura()){
        for(i=1;i<x;++i){
            cout<<i<<" ";
        }
        cout<<(i++)<<endl;
    }

    return 0;
}
