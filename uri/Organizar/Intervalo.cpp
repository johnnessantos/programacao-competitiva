#include<iostream>
using namespace std;

int main(){

    float x;
    cin>>x;
    if (x<0 || x>100 ){
        cout<<"Fora de intervalo\n";
    }else{
        if(x>=0 && x<=25.0){
            cout<<"Intervalo [0,25]\n";
        }else{
            if(x>25.0 && x<=50.0){
                cout<<"Intervalo (25,50]\n";
            }else{
                if(x>50.0 && x<=75.0){
                    cout<<"Intervalo (50,75]\n";
                }else{
                    cout<<"Intervalo (75,100]\n";                }
            }
        }
    }

    return 0;
}
