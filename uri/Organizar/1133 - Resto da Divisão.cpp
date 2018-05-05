#include<iostream>
using namespace std;
bool multiplo(int x){
    return (x%5==2 || x%5==3);
}
int main(){
    int x,y,i;
    cin>>x>>y;
    if(x>y) swap(x,y);
    for(i=(x+1);i<y;i++){
        if(multiplo(i)) cout<<i<<endl;
    }
    return 0;
}
