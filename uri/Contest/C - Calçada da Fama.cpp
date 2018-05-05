#include<iostream>
using namespace std;

int preencher(int tam,int cam){
    int e,est,i,j,a,b,cont=0;
    int v[tam+1];
    for(i=0;i<cam;i++){
        cin>>a>>b;
        if(a>b) swap(a,b);
        while(a<=b){
            v[a]=1;
            a++;
        }
    }
    cin>>e;
    for(j=0;j<e;j++){
        cin>>est;
        if(v[est]!=1) cont++;
    }
    return cont;
}

int main(){
    int t,n,c,k;
    cin>>t;
    for(k=1;k<=t;k++){
        cin>>n>>c;
        cout<<"Caso #"<<k<<": "<<preencher(n,c)<<endl;
    }
    return 0;
}
