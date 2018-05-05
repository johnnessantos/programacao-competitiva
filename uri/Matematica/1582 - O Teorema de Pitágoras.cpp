#include<iostream>
using namespace std;

int quad(int n){
    return n*n;
}
bool triplaPitagorica(int a, int b, int c){
    int ta, tb, tc;
    ta = quad(a);
    tb = quad(b);
    tc = quad(c);
    return (ta==tb+tc) || (tb == ta+tc) || (tc == ta+tb);
}

int mdc(int a, int b){
    int m;
    while(b != 0){
        m = a % b;
        a = b;
        b = m;
    }
    m = a;
    return m;
}

bool primitiva(int a, int b, int c){
    int aux;
    aux = mdc(a,b);
    aux = mdc(aux,c);
    return aux==1;
}

int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        if(triplaPitagorica(a,b,c)){
            if(primitiva(a,b,c)){
                cout<<"tripla pitagorica primitiva"<<endl;
            }else{
                cout<<"tripla pitagorica"<<endl;
            }
        }else{
            cout<<"tripla"<<endl;
        }
    }
    return 0;
}
