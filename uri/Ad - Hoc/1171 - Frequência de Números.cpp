#include<iostream>
using namespace std;

int main(){
    int dado[2001];
    int i,j;

    for(i=1;i<=2000;i++) dado[i]=0;
    cin>>j;
    while(j>0){
        cin>>i;
        dado[i]++;
        j--;
    }
    for(i=1;i<=2000;i++){
        if(dado[i]!=0){
            cout<<i<<" aparece "<<dado[i]<<" vez(es)"<<endl;
        }
    }
    return 0;
}
