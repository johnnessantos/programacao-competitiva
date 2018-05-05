#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x!=0 && y!=0){
        do{
            if(x>0){
                if(y>0){
                    cout<<"primeiro"<<endl;
                }else{
                    cout<<"quarto"<<endl;
                }
            }else{
                if(y>0){
                    cout<<"segundo"<<endl;
                }else{
                    cout<<"terceiro"<<endl;
                }
            }
            cin>>x>>y;
        }while(x!=0 && y!=0);
    }
    return 0;
}
