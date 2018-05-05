#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 1000
int main(){
    float lanche[] = {0.0,1.50,2.50,3.50,4.50,5.50};
    int p,q,l;

    cin>>p;
    for(short i=0; i<p; i++){
        cin>>l>>q;
        lanche[0] = lanche[0] + (lanche[l-MAX]*q);
    }
    cout<<fixed<<setprecision(2)<<lanche[0]<<endl;
    return 0;
}
