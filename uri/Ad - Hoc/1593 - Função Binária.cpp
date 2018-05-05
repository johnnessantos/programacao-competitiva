#include<iostream>
#include<bitset>
#include <cstdlib>
using namespace std;

int main(){
    int i,N,c;
    int binario;
    unsigned long long int x;
    char * End;
    string t;
    cin>>N;
    while(N>0){
        cin>>t;
        x = strtoull(t.c_str(),&End,10);
        cout<<x<<endl;
        N--;
    }
    return 0;
}

