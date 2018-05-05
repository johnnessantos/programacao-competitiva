#include<bits/stdc++.h>
using namespace std;

int main(){
    string c;
    int cont, proc, leitura;
    while(cin>>c>>proc){
        leitura = cont = 0;
        for(int i=0; i<c.size(); i++){
           if(c[i]=='W') {
                cont++;
                cont = cont + leitura/proc;
                if(leitura%proc>0) cont++;
                leitura = 0;
           }
           if(c[i]=='R') leitura++;
        }
        cont = cont + leitura/proc;
        if(leitura%proc>0) cont++;
        cout<<cont<<endl;
    }
    return 0;
}

