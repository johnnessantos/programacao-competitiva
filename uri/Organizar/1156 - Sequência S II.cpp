#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float s=1.0;
    int i=3;
    float j=2.0;
    while(i<=39){
        s = s + (i/j);
        i=i+2;
        j=j*2.0;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
