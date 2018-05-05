#include<iostream>
using namespace std;

int main (){

    int A;
    while (cin>>A){
        if (A*10 % 60 > 0 ){
            cout<<"N"<<endl;
        }else{
            cout<<"Y"<<endl;
        }
    }
    return 0;
}
