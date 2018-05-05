#include<iostream>
using namespace std;
int L,R;
bool leitura(){
    cin>>L>>R;
    return !(L==0 && R==0);
}

int main(){
    while(leitura()){
        cout<<L+R<<endl;
    }
    return 0;
}
