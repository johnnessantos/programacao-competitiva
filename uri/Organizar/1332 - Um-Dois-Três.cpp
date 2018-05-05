#include<iostream>
#include<cstring>
using namespace std;

int reconhecedor(char number[], int n){
    if(n==5){
        return 3;
    }else{
        if(number[0]=='o' ){
            if (number[1]== 'n' || number[2]=='e'){
                return 1;
            }else{
                return 2;
            }
        }else{
            if (number[1]== 'n' && number[2]=='e'){
                return 1;
            }else{
                return 2;
            }
        }
    }
}
int main(){
    int n;
    char numero[6];
    cin>>n;
    while(n>0){
        cin>>numero;
        cout<<reconhecedor(numero,strlen(numero))<<endl;
        n--;

    }
    return 0;
}
