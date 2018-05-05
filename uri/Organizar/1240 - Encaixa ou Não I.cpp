#include<iostream>
#include<cstring>
using namespace std;

bool encaixa(char number[] , char contem[]){
    int i,j,k;
    bool flag =true;
    i=strlen(number);
    j=strlen(contem);
    if(i<j){
        return false;
    }else{
        k=1;
        while(k<=j && flag){
            flag = flag && number[i-k]==contem[j-k];
            k++;
        }
        return flag;
    }
}
int main(){
    int n;
    char number[32];
    char contem[32];
    cin>>n;
    while(n>0){
        cin>>number;
        cin>>contem;
        if(encaixa(number,contem)){
            cout<<"encaixa"<<endl;
        }else{
            cout<<"nao encaixa"<<endl;
        }
        n--;
    }
    return 0;
}
