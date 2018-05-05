#include<iostream>
using namespace std;
int x,y;
void maior(){
    if(x>y){
        int aux = x;
        x=y;
        y=aux;
    }
}
int main(){
    int i,soma=0;
    cin>>x>>y;
    maior();
    if(x%2 == 0)x++;
    for(i=(x+2);i<y;i=i+2){
        cout<<i<<endl;
        soma=soma+i;
    }
    cout<<soma<<endl;
    return 0;
}
