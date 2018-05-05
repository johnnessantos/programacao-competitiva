#include<iostream>
#include<cmath>
using namespace std;

int main (){
    int N,A,B,C,D,X,Y;
    int X1,Y1;
    cin>>N;
    while(N>0){
        cin>>A>>B>>C>>D;
        X1 = abs(D-B);
        Y1 = abs(C-A);
        X = X1/Y1;
        Y = (X1%Y1*100)/Y1;
        if(D<B && A<C) X=-X;
        if (Y == 0) cout<<X<<",00"<<endl;
        else cout<<X<<","<<Y<<endl;

        N--;
    }
    return 0;
}

