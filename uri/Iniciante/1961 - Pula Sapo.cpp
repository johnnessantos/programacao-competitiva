#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main(){
    int P,N;
    cin>>P>>N;
    int salto[N];

    for(short i=0; i<N; i++) cin>>salto[i];
    for(short i=0; i<N-1; i++) salto[i] = abs(salto[i]-salto[i+1]);
    sort(salto, salto+(N-1));
    if(salto[N-2]>P) cout<<"GAME OVER"<<endl;
    else cout<<"YOU WIN"<<endl;

    return 0;
}
