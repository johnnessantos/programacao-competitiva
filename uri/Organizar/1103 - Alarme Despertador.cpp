#include<iostream>
using namespace std;

int horas(int h1, int m1 , int h2 , int m2){
    int m;
    if(h1==h2){
        return m2-m1;
    }else{
        if(m1>m2){
            m=(60-m1) + m2;
        }else{
            m = m1 - m2;
        }
        if(h1<h2){
            return (h2-h1)*60 + m;
        }else{
            return ((24-h2) + h1)*60 + m;

        }
    }
}



int main(){
    int h1,m1,h2,m2,contador;
    cin>>h1>>m1>>h2>>m2;
    while(h1!=0 || m1!=0 || h2!=0 || m2!=0){
        cout<<horas(h1,m1,h2,m2)<<endl;
        cin>>h1>>m1>>h2>>m2;
    }
    return 0;
}
