#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    double a,b,c,delta,r1,r2;
    cin>>a>>b>>c;
    delta=(b*b - 4*a*c);
    if(a==0.0 || delta<0){
        cout<<"Impossivel calcular\n";
    }else{
        r1 = (-b + sqrt(delta))/(2.0*a);
        r2 = (-b - sqrt(delta))/(2.0*a);
        cout<< fixed << setprecision(5)<<"R1 = "<<r1<<"\n";
        cout<< fixed << setprecision(5)<<"R2 = "<<r2<<"\n";
    }
    return 0;
}
