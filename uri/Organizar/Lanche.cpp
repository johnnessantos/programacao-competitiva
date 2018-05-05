#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int codigo,quantidade;

    cin>>codigo>>quantidade;
    if(codigo==1){
        cout<<fixed <<setprecision(2)<<"Total: R$ "<<4.00*quantidade<<"\n";
    }else{
        if(codigo==2){
            cout<<fixed <<setprecision(2)<<"Total: R$ "<<4.50*quantidade<<"\n";
        }else{
            if(codigo==3){
                cout<<fixed <<setprecision(2)<<"Total: R$ "<<5.00*quantidade<<"\n";
            }else{
                if(codigo==4){
                    cout<<fixed <<setprecision(2)<<"Total: R$ "<<2.00*quantidade<<"\n";
                }else{
                    if(codigo==5){
                        cout<<fixed <<setprecision(2)<<"Total: R$ "<<1.50*quantidade<<"\n";
                    }
                }
            }
        }
    }
    return 0;
}
