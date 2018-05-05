#include<iostream>
using namespace std;
int main(){
    int x,y,i;
    cin>>x>>y;
    for(i=1;i<=y;i++){
        if(i%x != 0){
            if(i!=y){
                cout<<i<<" ";
            }else{
                cout<<i<<endl;
            }

        }else{
            cout<<i<<endl;
        }

    }
    return 0;
}
