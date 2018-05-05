#include<iostream>
using namespace std;

int n;
bool leitura(){
    cin>>n;
    return n!=0;
}

int main(){
    int a,b;
    int jg1,jg2;
    while(leitura()){
        jg1=0;
        jg2=0;
        while(n>0){
            cin>>a>>b;
            if(a>b) jg1++;
            if(b>a) jg2++;
            n--;
        }
        cout<<jg1<<" "<<jg2<<endl;
    }
    return 0;
}
