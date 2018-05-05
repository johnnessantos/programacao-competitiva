#include<iostream>
using namespace std;
int main (){
    int i,T,N,adder,p;
    string time;

    while (cin>>T>>N && (T!=0)){
        adder = 0;
        for(i=0; i<T; i++){
            cin>>time>>p;
            adder = adder + p;
        }
        cout<<(N*3 - adder)<<endl;
    }
    return 0;
}
