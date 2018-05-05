#include<iostream>
using namespace std;
bool maior(int x, int y){
    if(x>y){
        return true;
    }else{
        return false;
    }
}

int main(){
    int m,n,i,soma;
    cin>>m>>n;
    do{
        soma=0;
        if(maior(m,n)){
            swap(m,n);
        }
        for(i=m;i<=n;i++){
            cout<<i<<" ";
            soma=soma+i;
        }
        cout<<"Sum="<<soma<<endl;
        cin>>m>>n;
    }while(m!=0 && n!=0);

    return 0;
}
