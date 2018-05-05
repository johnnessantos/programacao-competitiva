#include<iostream>
using namespace std;

int main(){
    int N,p;
    int V[100];

    cin>>N;
    for(short i=0; i<N; i++) cin>>V[i];
    p = 0;
    for(short j=1; j<N; j++){
        if(V[p]>V[j]) p = j;
    }
    cout<<p+1<<endl;
    return 0;
}
