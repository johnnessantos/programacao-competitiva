#include<iostream>
#include<cstring>
using namespace std;

int number(char n){
    switch(n){
        case '0':
            return 6;
        case '1':
            return 2;
        case '2':
            return 5;
        case '3':
            return 5;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 3;
        case '8':
            return 7;
        case '9':
            return 6;
    }
}

int leds(char d[] ){
    int i,cont=0;
    for(i=0;i<strlen(d);i++){
        cont = cont+number(d[i]);
    }
    return cont;
}

int main(){
    int n;
    char d[101];
    cin>>n;
    while(n>0){
        cin>>d;
        cout<<leds(d)<<" leds"<<endl;
        n--;
    }
    return 0;
}
