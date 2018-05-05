#include<iostream>
#include<algorithm>
using namespace std;

#define DAEDALUS 0
const int PTS[5] = {1,10,100,1000,10000};
int main(){
    int N,M,B,S,p, ext=0;
    int vlr[20];

    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>B;
        for(int j=0; j<N; j++) cin>>vlr[j];
        S = 0;
        for(int j=DAEDALUS+1; j<N; j++) S+=vlr[j];
        if(S<B){
            p = 0;
            while(S+PTS[p] <= B) p++;
            if(S+vlr[DAEDALUS] < B) ext = ext + (PTS[p-1]-vlr[DAEDALUS]);
            else ext = ext+PTS[p-1];
        }
    }
    cout<<ext<<endl;
    return 0;
}
