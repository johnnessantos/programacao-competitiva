#include<iostream>
using namespace std;

int main (){
    int R,N,i,D;
    i = 1;
    while (cin>>R>>N && R!=0 && N!=0){
        R = R-N;
        D = R/N;
        if (R%N > 0) D++;
        if (D > 26)cout<<"Case "<<i<<": impossible"<<endl;
        else cout<<"Case "<<i<<": "<<D<<endl;
        i++;
    }
    return 0;
}
