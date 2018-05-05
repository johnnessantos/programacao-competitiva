#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int h,p;

    cin>>h>>p;
    cout<<fixed<<setprecision(2)<<(float)h/p<<endl;
    return 0;
}
