#include <iostream>
#include<cmath>
using namespace std;

bool potencia(int x){
    if(x==1) return false;
    return (pow(2,log2(x))==x);
}

int maior(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else{
        if(b>a && b>c){
            return b;
        }else{
            return c;
        }
    }
}
int main(){

    /*
    int i,a,b,c,N;
    unsigned int ponto[3];
    int m;

    string s;
    cin>>N;
    while(N!=0){
        ponto[0]=0;
        ponto[1]=0;
        ponto[2]=0;
        for(i=0;i<N;i++){
            cin>>a>>b>>c;
            m = maior(a,b,c);
            if(potencia(a)){
                ponto[0]++;
                if (a==m) ponto[0]++;
            }
            if(potencia(b)){
                ponto[1]++;
                if (b==m) ponto[1]++;
            }
            if(potencia(c)){
                ponto[2]++;
                if (c==m) ponto[2]++;
            }
        }

        if(ponto[0] > ponto[1] && ponto[0]>ponto[2]){
            s = "Uilton";
        }else{
            if(ponto[1] > ponto[0] && ponto[1]>ponto[2]){
                    s = "Rita";
            }else{
                if(ponto[2]>ponto[0] && ponto[2]>ponto[1]){
                        s = "Ingred";
                }else{
                    s = "URI";
                }
            }
        }
        cout<<s<<endl;
        cin>>N;
        if( N==0 ) return 0;
    }*/
    unsigned int t = 1000000000;
    cout<<t<<endl;

    return 0;
}
