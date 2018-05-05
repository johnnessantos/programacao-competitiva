#include<iostream>
using namespace std;

int main(){

    int N,C;
    int i,j,g,cont=0;
    bool gol = true;
    cin>>N>>C;
    for(i=0;i<N;i++){
        for(j=0;j<C;j++){
            cin>>g;
            gol = gol && (g!=0);
        }
        if(gol) cont++;
        gol=true;
    }
    cout<<cont<<endl;
    return 0;
}
