#include<iostream>
using namespace std;

char vencedor(int a , int b, int c){
    if(a==b && b==c){
        return '*';
    }else{
        if(a==b && c!=b){
            return 'C';
        }else{
            if(a==c && b!=a){
                return 'B';
            }else{
                return 'A';
            }
        }
    }
}

int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        cout<<vencedor(a,b,c)<<endl;
    }
    return 0;
}
