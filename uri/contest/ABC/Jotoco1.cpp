#include<iostream>
using namespace std;

int main (){
    int a;
    int b;
    float muro = 0;
    int c = 0;
    cin>>a>>b;

    while (muro<b){
        muro = muro+a;
        c++;
        if (muro<b) muro = muro - (float)a/2;
        cout<<muro<<endl;
    }
    cout<<c<<endl;
    return 0;
}
