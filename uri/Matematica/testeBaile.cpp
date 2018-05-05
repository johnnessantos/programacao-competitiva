#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<time.h>
using namespace std;

int tochar(char c){
    return (int)c-48;
}

int main(){
    int i;
    char r[30], s[30];
    ifstream arm("toolkit.txt");
    ifstream out2("saida.txt");

    for(i=1;i<=100;i++){
        arm.getline(r,30);
        out2.getline(s,30);
        if(strcmp(r,s)==0) cout<<i<<"certo"<<endl;
        else cout<<i<<"#######"<<endl;
        //if (strcmp(r,s)!=0) cout<<r<<" "<<s<<endl;
    }

    /*ofstream in("entrada.txt");
    in<<100<<endl;
    srand(unsigned (time(NULL)));
    for(i=1;i<=100;i++){
        in<<1+rand()%100000000<<endl;
    }*/

    return 0;
}
