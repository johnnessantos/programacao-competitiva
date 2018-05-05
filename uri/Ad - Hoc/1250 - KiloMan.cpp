#include<iostream>
using namespace std;


int main (){
    int i,N, S, counter;
    string movements;
    int heights[50];

    cin>>N;
    while (N>0){
        counter = 0;
        cin>>S;
        for(i=0;i<S;i++) cin>>heights[i];
        cin>>movements;
        for(i=0;i<S;i++){
            if ( (heights[i] <=2 && movements[i]=='S') || (heights[i] >=3 && movements[i]=='J')) counter++;
        }
        cout<<counter<<endl;
        N--;
    }
    return 0;
}
