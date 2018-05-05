#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

int main(){
    time_t inicio,fim;
    int i;
    int v[10000];
    float tempo;
    inicio = time(NULL);
    for(i=0;i<10000;i++){
        v[i]=i;
    }
    fim = time(NULL);
    tempo= fim - inicio;
    cout<<fixed<<setprecision(3)<<tempo<<endl;
    return 0;
}
