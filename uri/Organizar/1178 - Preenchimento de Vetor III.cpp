#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double N[100];
    int i;
    cin>>N[0];
    for(i=1;i<100;i++) N[i] = N[i-1]/2;
    for(i=0;i<100;i++) cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<N[i]<<endl;;
    return 0;
}
