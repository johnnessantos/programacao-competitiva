#include<iostream>
using namespace std;

int main (){
    long long int a;
    int b;
    int f = 1;
    cin>>a>>b;

    while (b>0){
        if (b>1)cout<<a*f<<" ";
        else cout<<a*f<<endl;
        f*=10;
        b--;
    }
    return 0;
}
