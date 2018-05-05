#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const float c = 6.39999;
const float raiz = 1.732051;
float area(int l){
    return (l*l)*raiz/16;
}
int main(){
    int l;
    float s;
    //while(cin>>l){
        l=1000;
        s = ((l*l)*raiz/16)*c;
       cout<<fixed<<setprecision(2)<<s<<endl;
    //}

    return 0;
}
