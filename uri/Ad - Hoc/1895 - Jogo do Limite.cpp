#include<iostream>
#include <queue>
#include <cmath>
using namespace std;

int main(){
    int n,t,l,c;
    int pAlice = 0, pBob = 0;
    cin>>n>>t>>l;

    queue <int> cartas;
    for(int i=0; i<n-1; i++){
        cin>>c;
        cartas.push(c);
    }

    while(!cartas.empty()){
        if(abs(t-cartas.front()) <=l){
            pAlice += abs(t-cartas.front());
            t = cartas.front();
        }
        cartas.pop();
        if(abs(t-cartas.front()) <=l){
            pBob += abs(t-cartas.front());
            t = cartas.front();
        }
        cartas.pop();
    }
    cout<<pAlice<<" "<<pBob<<endl;
    return 0;
}
