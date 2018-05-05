#include <iostream>
using namespace std;

int main (){
    int N,i,adder;
    int ladder[1000];
    while (cin>>N && N!=0){
        adder = 0;
        cin>>ladder[0];
        for(i=1; i<N; i++){
            cin>>ladder[i];
            if ((ladder[i] - ladder[i-1]) >= 10){
                adder = adder + 10;
            } else {
                adder = adder + (ladder[i] - ladder[i-1]);
            }
        }
        adder = adder+10;
        cout<<adder<<endl;
    }
    return 0;
}
