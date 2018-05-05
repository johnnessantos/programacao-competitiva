#include<iostream>
using namespace std;

int losango(int x, int y){
    return (int)(x*y)/2;
}

int main(){
    int n,x,y;
    cin>>n;
    while(n>0){
        cin>>x>>y;
        cout<<losango(x,y)<<" cm2"<<endl;
        n--;
    }
    return 0;
}
