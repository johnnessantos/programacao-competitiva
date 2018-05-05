#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float hr,vl;
    int nmr;
    cin>>nmr>>hr>>vl;
    cout<<"NUMBER = "<<nmr<<"\n";
    cout <<setiosflags(ios::fixed)<< setprecision (2) <<"SALARY = U$ "<<hr*vl<<"\n";
    return 0;
}
