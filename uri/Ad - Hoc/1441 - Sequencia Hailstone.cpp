#include<iostream>
using namespace std;
int main (){
    int N,m;
    while(cin>>N && N!=0){
        m = N;
        while(N!=1){
            N = ((N%2)==0) ? N/2 : 3*N+1;
            if (m < N) m = N;
        }
        cout<<m<<endl;
    }

    return 0;
}
