#include<iostream>
using namespace std;
void EmOrdem(int x,int y, int z){
    if(x<y && x<z){
        cout<<x<<"\n";
        if(y<z){
            cout<<y<<"\n";
            cout<<z<<"\n";
        }else{
            cout<<z<<"\n";
            cout<<y<<"\n";
        }
    }else{
        if(y<x && y<z){
            cout<<y<<"\n";
            if(x<z){
                cout<<x<<"\n";
                cout<<z<<"\n";
            }else{
                cout<<z<<"\n";
                cout<<x<<"\n";
            }
        }else{
            cout<<z<<"\n";
            if(y<x){
                cout<<y<<"\n";
                cout<<x<<"\n";
            }else{
                cout<<x<<"\n";
                cout<<y<<"\n";
            }
        }
    }
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    EmOrdem(x,y,z);
    cout<<"\n";
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<z<<"\n";
    return 0;
}
