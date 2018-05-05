#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i=0;
    double media=0;
    float N,t=0.0;
    char S[99];

    while(gets(S)){
        scanf("%f",&N);
        t=t+N;
        i++;
    }

    media=t/i;
    cout<<fixed<<setprecision(1)<<media<<endl;
}

#include<iostream>
#include<istream>
#include<iomanip>
using namespace std;

int main(){
    int i=0;
    double media=0.0;
    float N;
    char nome[100];

    while(cin.getline(nome,100)){
        cin.clear();
        cin>>N;
        media+=N;
        i++;

    }

    media=media/i;
    cout<<fixed<<setprecision(1)<<media<<endl;
}

