#include<iostream>
using namespace std;

bool impar(int i){
    if((i%2 == 1) || (i%2==-1)){
        return true;
    }
    return false;
}
bool maior(int x, int y){
    if(x>y){
        return true;
    }else{
        return false;
    }
}

int main(){
    int i,soma;
    int x,y;
    cin>>x>>y;
    soma=0;
    if(maior(x,y)){
        swap(x,y);
    }
    for(i=(1+x);i<y;i++){
        if(impar(i)){
            soma=soma+i;
        }
    }
    cout<<soma<<endl;
    return 0;
}
