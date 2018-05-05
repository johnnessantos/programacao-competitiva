#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if( a>=0 || a%b==0 ){
        cout<<a/b<<" "<<a%b<<endl;
    }else{
        if(abs(a) == abs(b)){
            if((a<0 && b<0) || (a>0 && b>0) ) cout<<"1 0"<<endl;
            else cout<<"-1 0"<<endl;
        }else{
            if(b<0){
                int c = a/b + 1;
                cout<<c<<" "<<abs(c*b) + a<<endl;
            }else{
                int c = a/b -1;
                cout<<c<<" "<<abs(c*b) + a<<endl;
            }
        }
    }

    return 0;
}
