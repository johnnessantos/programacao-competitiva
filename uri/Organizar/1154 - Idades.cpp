#include<iostream>
#include<iomanip>
using namespace std;
int id;
bool leitura(){
    cin>>id;
    return id>0;
}
int main(){
    unsigned int media=0;
    float c=0.0;
    while(leitura()){
        media+=id;
        c++;
    }
    cout<<fixed<<setprecision(2)<<media/c<<endl;
    return 0;
}
