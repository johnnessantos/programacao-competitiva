#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a;
    double b;
    double media;

    cin>>a;
    cin>>b;
    media = ((a*3.5) + (b*7.5));
    media/=11;

    cout <<setiosflags(ios::fixed)<< setprecision (5) <<"MEDIA = "<<media<<"\n";
    return 0;
}
