#include<iostream>
using namespace std;
int calc(int i){
    if(i==1){
        return 1;
    }else{
        return 2+calc(--i);
    }
}
int main(){
    int c;
    int i;
    for(i=1;i<=5;i++){
        cout<<"I="<<calc(i)<<" J="<<7<<endl;
        cout<<"I="<<calc(i)<<" J="<<6<<endl;
        cout<<"I="<<calc(i)<<" J="<<5<<endl;
    }
    return 0;
}
