#include <iostream>
using namespace std;
#define dia 1440

// Formula (tMin1 + x) mod dia == tMin2
int main() {
    int h1,m1,h2,m2;
    h1=1;
    h2=1;
    m1=1;
    m2=2;
    int s1, s2,i;
    while(h1!=0 || h2!=0 || m1!=0 || m2!=0){ // Condition of stop
        cin>>h1>>m1>>h2>>m2;
        if(h1!=0 || h2!=0 || m1!=0 || m2!=0){
            i=0;
            s1 = h1*60 + m1;
            s2 = h2*60 + m2;
            while(((s1+i)%dia)!=s2){ // calculation of minutes
                i++; // Increment until be true
            }
            cout<<i<<endl;
        }
    }
    return 0;
}
