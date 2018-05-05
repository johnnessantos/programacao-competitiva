#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>b && b>=2 && b<=96 ){
        cout<<"minguante"<<endl;
    }else{
        if(b>=0 && b<=2){
            cout<<"nova"<<endl;
        }else{
            if(b>=2 && b<=96){
                cout<<"crescente"<<endl;
            }else{
                if(b>=96 && b<=100)cout<<"cheia"<<endl;
            }
        }
    }
    return 0;
}
