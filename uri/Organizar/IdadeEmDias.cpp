#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n/365<<" ano(s)\n"<<(n%365)/30<<" mes(es)\n"<<((n%365)%30)<<" dia(s)\n";
    return 0;
}
