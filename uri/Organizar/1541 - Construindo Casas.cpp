#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a=1,b=1,c=1,x;

    while(a!=0 && b!=0 && c!=0){
        cin>>a>>b>>c;
        if(a!=0 && b!=0 && c!=0){
            x = a*b;
            if(c==100){
                x = (int)sqrt(x);
                cout<<x<<endl;
            }else{
                x = (x * 100) / c;
                x=sqrt(x);
                cout<<x<<endl;
            }
        }
    }
    return 0;
}
