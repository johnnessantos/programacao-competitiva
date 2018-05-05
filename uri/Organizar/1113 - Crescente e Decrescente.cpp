#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    do{
        if(x>y){
            cout<<"Decrescente"<<endl;
        }else{
            cout<<"Crescente"<<endl;
        }
        cin>>x>>y;
    }while(x!=y);
    return 0;
}
