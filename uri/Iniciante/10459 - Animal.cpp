#include<iostream>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;

    if(a.compare("vertebrado")==0){
        if(b.compare("ave")==0){
            if(c.compare("carnivoro")==0) cout<<"aguia"<<endl;
            if(c.compare("onivoro")==0) cout<<"pomba"<<endl;
        }else {
            if(b.compare("mamifero")==0){
                if(c.compare("onivoro")==0) cout<<"homem"<<endl;
                if(c.compare("herbivoro")==0) cout<<"vaca"<<endl;
            }
        }
    }else{
        if(a.compare("invertebrado")==0){
            if(b.compare("inseto")==0){
                if(c.compare("hematofago")==0) cout<<"pulga"<<endl;
                if(c.compare("herbivoro")==0) cout<<"lagarta"<<endl;
            }
            if(b.compare("anelideo")==0){
                if(c.compare("hematofago")==0) cout<<"sanguessuga"<<endl;
                if(c.compare("onivoro")==0) cout<<"minhoca"<<endl;
            }
        }
    }
    return 0;
}
