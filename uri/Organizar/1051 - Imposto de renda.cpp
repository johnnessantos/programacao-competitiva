#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    float salario;
    cin>>salario;
    if(salario >= 0 && salario<=2000){
        cout<<"Isento\n";
    }else{
        if(salario>2000 && salario <=3000){
            cout<<fixed<<setprecision(2)<<"R$ "<<((salario - 2000)*0.08)<<"\n";
        }else{
            if(salario>3000 && salario<=4500){
                cout<<fixed<<setprecision(2)<<"R$ "<<(80 + (salario-3000)*0.18)<<"\n";
            }else{
                cout<<fixed<<setprecision(2)<<"R$ "<<(350 + (salario-4500)*0.28)<<"\n";
            }
        }
    }
    return 0;
}
