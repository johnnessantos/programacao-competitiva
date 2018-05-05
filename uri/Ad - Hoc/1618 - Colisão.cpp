#include<bits/stdc++.h>
using namespace std;

int main(){
    int cordX[4], cordY[4];
    int N,x,y;

    cin>>N;
    while(N){
        for(int i=0 ; i<4; i++){
            cin>>cordX[i]>>cordY[i];
        }
        cin>>x>>y;
        if(x>=cordX[0] && x<=cordX[1] && y>=cordY[0] && y<=cordY[3]) cout<<1<<endl;
        else cout<<0<<endl;
        N--;
    }
    return 0;
}
