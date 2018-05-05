#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

/* Could be solving so
double Arcos(double L){
    return (2*L) - 3;
}
*/

double Total(double L){
    return 2 - 3/L;
}
/*
(pontos - 3) + pontos = Total de arcos
simplifing : 2*pontos - 3 so :
    x = arcos - pontos / pontos then :
    x = (2*pontos - 3) - pontos / pontos so :
        x = (2 - 3/pontos) - 1

*/

int main(){
    double L;
    double T;

    while (cin>>L && L!=0){
        T = Total(L) - 1;
        cout<<fixed<<setprecision(6)<<T<<endl;
    }
    return 0;
}
