#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    int N,i=0;
    double media=0;

    string nome[100];

    while(cin.getline(nome,100)){
        scanf("%d",&N);
        media=media+N;
        i++;
    }
    media=media/i;
    cout<<fixed<<setprecision(1)<<media<<endl;
    return 0;
}
