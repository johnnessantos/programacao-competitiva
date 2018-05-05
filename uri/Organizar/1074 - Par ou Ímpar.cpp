#include<iostream>
using namespace std;
int x;

void Paridade(int n){
    if(n>0){
        cin>>x;
        if(x==0){
            cout<<"NULL"<<endl;
            Paridade(--n);
        }else{
            if(x%2 == 0){
                if(x<0){
                    cout<<"EVEN NEGATIVE"<<endl;
                }else{
                    cout<<"EVEN POSITIVE"<<endl;
                }
            }else{
                 if(x<0){
                    cout<<"ODD NEGATIVE"<<endl;
                }else{
                    cout<<"ODD POSITIVE"<<endl;
                }
            }
            Paridade(--n);
        }
    }
}
int main(){
    int n;
    cin>>n;
    Paridade(n);
    return 0;
}
