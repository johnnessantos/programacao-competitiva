#include<iostream>
using namespace std;

int main(){
    int N;
    unsigned int A;
    cin>>N;
    while(N>0){
        cin>>A;
        if(A<2015) cout<<(2015-A)<<" D.C."<<endl;
        else cout<<(A-2014)<<" A.C."<<endl;
        N--;
    }
    return 0;
}
