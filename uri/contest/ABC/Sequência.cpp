#include<iostream>
using namespace std;

int main (){
    int a,b;

    cin>>a>>b;

    if(a>b) swap(a,b);
    while (a<=b){
        cout<<a<<" ";
        a++;
    }
    return 0;
}
