#include<iostream>
using namespace std;
bool impar(int x){
    return x%2==1 || x%2==-1;
}

int main(){
    int n,x,y;
    int somador;

    cin>>n;
    while(n>0){
        cin>>x>>y;
        somador=0;
        while(y>0){
            if(impar(x)){
                somador=somador+x;
                y--;
            }
            x++;
        }
        cout<<somador<<endl;
        n--;
    }

    return 0;
}
