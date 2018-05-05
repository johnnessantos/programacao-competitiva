#include<iostream>
using namespace std;

int fey(int n){
    if(n==1){
        return 1;
    }else{
        return n*n + fey(n-1);
    }
}

int main (){
    int N;

    while (cin>>N && N!=0){
        cout<<fey(N)<<endl;
    }
    return 0;
}
