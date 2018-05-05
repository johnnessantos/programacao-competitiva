#include<iostream>
#include<iomanip>
using namespace std;
int triang(float a, float b, float c){
    if ((a<b+c) && (b<a+c) && (c<a+b) ){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    if(triang(a,b,c)==1){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<"\n";
    }else{
        cout<<fixed<<setprecision(1)<<"Area = "<<((a+b)*c)/2<<"\n";
    }

}
