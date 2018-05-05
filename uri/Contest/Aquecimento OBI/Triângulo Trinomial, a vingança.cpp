#include <iostream>
#include<cmath>
using namespace std;

const long long int mod = 2147483647;

int main (){
    long long int r,ans,p;
    ans = 1;
    p = 3;
    cin>>r;
    while (r > 0){
        if (r%2 == 1) ans= (ans*p)%mod;
        p = p*p%mod;
        r = (r>>1);
    }
    cout<<ans<<endl;

    return 0;
}
