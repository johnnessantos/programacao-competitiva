#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

/** Formula: alturaElfo + TG(Angulo)*distancia */
int main(){
    double a,b,c,altura;
    double pi = 3.141592654;
    while(cin>>a>>b>>c){
        altura = 5*(c + tan((a*pi)/180)*b);
        cout<<fixed<<setprecision(2)<<altura<<endl;
    }
    return 0;
}
