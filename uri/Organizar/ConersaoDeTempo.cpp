#include<iostream>
using namespace std;

int main(){
    int n;
    int hora, minuto;
    cin>>n;
    hora=n/3600;
    n%=3600;
    minuto=n/60;
    cout<<hora<<":"<<minuto<<":"<<n%60<<"\n";
    return 0;
}
