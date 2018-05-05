#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n,x,y;

    cin>>n;
    while(n>0){
        cin>>x>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }else{
            cout<<fixed<<setprecision(1)<<(float)x/y<<endl;
        }
        n--;
    }
    return 0;
}
