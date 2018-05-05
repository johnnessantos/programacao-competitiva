#include<iostream>
#include<iomanip>
using namespace std;
int r;
float v=((4.0)/3)*(3.14159);
int main(){
    cin>>r;
    v*=(r*r*r);
    cout<<setiosflags(ios::fixed)<< setprecision(2)<<"VOLUME = "<<v<<"\n";
    return 0;
}
