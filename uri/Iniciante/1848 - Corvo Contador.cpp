#include<iostream>
#include <string>
using namespace std;

int to_int(string s){
    int f = 4;
    int sum = 0;
    for(int i=0;i<3; i++){
        if(s[i] == '*') sum +=f;
        f = (f>>1);
    }
    return sum;
}

int main(){
    string s;
    int somador = 0;

    while(getline(cin,s)){
        if(s.size()>4){
            cout<<somador<<endl;
            somador = 0;
        }else{
            somador += to_int(s);
        }
    }

    return 0;
}
