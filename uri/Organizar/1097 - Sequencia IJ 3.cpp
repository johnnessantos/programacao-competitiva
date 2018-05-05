#include<iostream>
using namespace std;
int calc(int i){
    if(i==1){
        return 1;
    }else{
        return 2+calc(--i);
    }
}
int calc2(int i){
    if (i==1){
        return 7;
    }else{
        return 2+calc2(--i);
    }
}
int main(){
    int c;
    int i;
    for(i=1;i<=5;i++){
        c=calc2(i);
        cout<<"I="<<calc(i)<<" J="<<c<<endl;
        cout<<"I="<<calc(i)<<" J="<<--c<<endl;
        cout<<"I="<<calc(i)<<" J="<<--c<<endl;
    }
    return 0;
}

