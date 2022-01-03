#include<bits/stdc++.h>

using namespace std;

int main(){
    double P, F, cookie;
    int Q;

    cin>>P>>Q>>F;
    for(int i=0; i<Q; i++){
        cin>>cookie;
        P += cookie;
    }
    cout<<fixed<<setprecision(2)<<P<<endl;
    if(P <= F) cout<<"ho ho ho"<<endl;
    else cout<<"papai noel precisa fazer exercicios"<<endl;

    return 0;
}