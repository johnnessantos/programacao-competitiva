#include<iostream>
using namespace std;
int calc(int i){
    if(i==1){
        return 1;
    }else{
        return 3+calc(--i);
    }
}
int calc2(int i){
    if(i==1){
        return 60;
    }else{
        return -5+calc2(--i);
    }
}

int main(){
    int i;
    for(i=1;i<=13;i++){
        cout<<"I="<<calc(i)<<" J="<<calc2(i)<<endl;
    }
    return 0;
}
