#include <iostream>
 
using namespace std;
 
int main() {
    int H,Z,L,max_age, min_age;
    
    cin>>H>>Z>>L;
    
    if(H>Z and H>L) max_age = H;
    if(Z>H and Z>L) max_age = Z;
    if(L>H and L>Z) max_age = L;
    
    if(H<Z and H<L) min_age = H;
    if(Z<H and Z<L) min_age = Z;
    if(L<H and L<Z) min_age = L;
    
    if(H > min_age and H < max_age) cout<<"huguinho"<<endl;
    if(Z > min_age and Z < max_age) cout<<"zezinho"<<endl;
    if(L > min_age and L < max_age) cout<<"luisinho"<<endl;
    
    
 
    return 0;
}