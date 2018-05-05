#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int a,b,c;
float perimetro(){
    return (a+b+c)/2.0;
}

float triangulo (float prm){
    float p;
    p = prm*(prm - a)*(prm - b)*(prm - c);
    return sqrt(p);
}

float circulo(float raio){
    return M_PI*(raio*raio);
}

float raioInscrito(){
    return (a+b-c)/2.0;
}

int main(){
    float cl,t,j;
    //while(cin>>a>>b>>c){
        cin>>a>>b>>c;
        cl=circulo(c/2.0);
        t=triangulo(perimetro());
        j=circulo(raioInscrito());
        cout<<perimetro();
        //cout<<fixed<<setprecision(4)<<cl<<" "<<t<<" "<<j<<endl;
    //}
    return 0;
}
