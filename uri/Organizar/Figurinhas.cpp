#include<iostream>

using namespace std;

    int fator (int a, int b){
        int men=a;
        if(men>b){
            men=b;
        }
        while( (a%men!=0) || (b%men!=0)){
            men--;
        }
        return men;
    }

int main(){

    int N,i;
    int F1,F2;

    cin>>N;
    int casos[N];
    for(i=0;i<N;i++){
        cin>>F1>>F2;
        casos[i]= fator(F1,F2);
    }
    for(i=0;i<N;i++){
        cout<<casos[i]<<"\n";
    }
    return 0;
}
