#include<iostream>
using namespace std;

int meio;
int sorteio(int k){
    if(k<=meio){
        return k*2;
    }else{
        return ((k-meio)*2) - 1;
    }
}

int main(){
    int p,cont,k=2;
    cin>>p;
    meio=p/2;
    cont=1;
    while(k != 1){
        k = sorteio(k);
        cont++;
    }
    cout<<cont<<endl;
    return 0;
}
