#include<iostream>
using namespace std;

int main (){
    float a;
    float b;
    float muro = 0.0;
    int c = 0;
    cin>>a>>b;

    while (muro < b){
        muro = muro + a;
        a -= a*0.1;
        c++;
    }
    cout<<c<<endl;

    return 0;
}
