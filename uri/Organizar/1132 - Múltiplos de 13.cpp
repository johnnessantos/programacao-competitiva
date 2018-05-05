#include<iostream>
using namespace std;

bool multiplo(int x){
    return x%13==0;
}

int main(){
    int x,y,i;
    int soma=0;
    cin>>x>>y;
    if(x>y) swap(x,y);

    for(i=x;i<=y;i++){
        if(!multiplo(i)){
            soma+=i;
        }
    }
    cout<<soma<<endl;
    return 0;
}
