#include<iostream>
using namespace std;

bool par(int x){
    return x%2==0;
}

bool leitura(int &x){
    cin>>x;
    return x!=0;
}

int main(){
    int x,s,c;
    while(leitura(x)){
        s=0;
        c=1;
        while(c<=5){
            if(par(x)){
                s=s+x;
                c++;
            }
            x++;
        }
        cout<<s<<endl;
    }
    return 0;
}
