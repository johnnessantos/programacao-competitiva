#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<fstream>
#include<cstring>

using namespace std;

bool perfeito(long long int n){
    long long int c = (int)sqrt(n);
    return c*c==n;
}

/*
//Modo lento
long long int salg(unsigned int n){
    unsigned long long int x=n;
    int i=1;
    while(!perfeito(x)){
        x = x+n;
        i++;
    }
    return x;
}
*/


long long int salga(unsigned int n){
    unsigned long long int x=(int)sqrt(n);
    x++;
    int i=1;
    while(x*x%n!=0){
        x++;
        i++;
    }
    return x*x;
}

int main(){
    int t,x,c=1;

    /*ifstream in("entrada.txt");
    ofstream out("saida.txt");*/

    int f;

    cin>>t;
    while(t>0){
        cin>>x;
        if(perfeito(x)){
            //out<<"Caso #"<<c<<": "<<x<<endl;
             cout<<"Caso #"<<c<<": "<<x<<endl;
        }else{
            //out<<"Caso #"<<c<<": "<<x<<endl;
            cout<<"Caso #"<<c<<": "<<salga(x)<<endl;
        }
        c++;
        t--;
    }

    //out.close();

    return 0;
}
