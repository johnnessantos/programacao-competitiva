#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string msg;
    int n,i,j,tam,p;

    cin>>n;
    while(n>0){
        cin>>msg;
        cin>>p;
        tam = msg.length();
        for(i=0;i<tam;i++){
            for(j=0;j<p;j++){
                if (msg[i]=='A') msg[i]='Z';
                else msg[i]--;
            }
        }
        cout<<msg<<endl;
        n--;
    }
}
