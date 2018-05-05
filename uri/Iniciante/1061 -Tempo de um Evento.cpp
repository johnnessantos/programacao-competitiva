#include<iostream>
#include<cstdio>
using namespace std;

#define MIN 60
#define HORA 3600
#define DIA 86400
const int horario[] = {DIA,HORA,MIN,1};
int main(){

    int Dado1[4],Dado2[4];
    long long int tempo1=0,tempo2 = 0;
    string msg[] = {" dia(s)"," hora(s)"," minuto(s)"," segundo(s)"};

    scanf("%*s %d %d %*c %d %*c %d",&Dado1[0],&Dado1[1],&Dado1[2],&Dado1[3]);
    scanf("%*s %d %d %*c %d %*c %d",&Dado2[0],&Dado2[1],&Dado2[2],&Dado2[3]);

    for(int i=0; i<4; i++){
        tempo1+= Dado1[i]*horario[i];
        tempo2+= Dado2[i]*horario[i];
    }
    tempo1 = tempo2 - tempo1;
    for(int i=0; i<4; i++){
        cout<<tempo1/horario[i]<<msg[i]<<endl;
        tempo1 = tempo1%horario[i];
    }
    return 0;
}
