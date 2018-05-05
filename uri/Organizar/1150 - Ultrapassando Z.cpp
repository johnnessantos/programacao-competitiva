#include<iostream>
using namespace std;

int main(){
    int x,z,somador,c=1;
    cin>>x>>z;
    while(z<=x){
        cin>>z;
    }
    somador=x;
    while(somador<z){
        x++;
        somador+=x;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
