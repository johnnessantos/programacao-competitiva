#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int A,B,C;
    while(cin>>A>>B>>C && A!=0 && B!=0 && C!=0) cout<<(int)cbrt(A*B*C)<<endl;
    return 0;
}
