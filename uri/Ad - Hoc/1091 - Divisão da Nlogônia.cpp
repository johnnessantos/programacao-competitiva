#include<iostream>
using namespace std;

int k;
bool leitura(){
    cin>>k;
    return k!=0;
}

int main(){
    int x,y,n,m;

    while(leitura()){
        cin>>n>>m;
        while(k>0){
            cin>>x>>y;
            if(n==x || m==y){
                cout<<"divisa"<<endl;
            }else{
                if(x>n){
                   if(y>m){
                        cout<<"NE"<<endl;
                    }else{
                        cout<<"SE"<<endl;
                    }
                }else{
                    if(y>m){
                        cout<<"NO"<<endl;
                    }else{
                        cout<<"SO"<<endl;
                    }
                }
            }
            k--;
        }
    }
    return 0;
}
