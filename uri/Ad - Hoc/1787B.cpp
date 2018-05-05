#include <iostream>
#include<cmath>
using namespace std;

long long int maior(long long int a, long long int b, long long int c){
    if(a>= b && a>=c)return a;
    if(b>=a && b>=c) return b;
    if(c>=a && c>=c) return c;
    return 0;
}

bool isPot(long long int v, long long int p[]){
    if(v%2 == 1) return false;
    int i = 0;
    while (i<50 && p[i]!=v) i++;
    return (i!=50);
}

int main(){
    long long int a,b,c,m,U,R,I;
    int i,N;
    long long int pot[50];
    pot[0] = 2;
    for(i=1;i<50;i++) pot[i] = pot[i-1]*2;

    while(cin>>N && N!=0){
        U = 0;
        R = 0;
        I = 0;
        for(i=0;i<N;i++){
            cin>>a>>b>>c;
            m = maior(a,b,c);
            if(isPot(a,pot)){
                U++;
                if (a==m) U++;
            }
            if(isPot(b,pot)){
                R++;
                if (b==m) R++;
            }
            if(isPot(c,pot)){
                I++;
                if (c==m) I++;
            }
        }
        if(U > R && U>I){
            cout<<"Uilton"<<endl;
        }else{
            if(R > U && R>I){
                    cout<<"Rita"<<endl;
            }else{
                if(I>U && I>R){
                       cout<<"Ingred"<<endl;
                }else{
                   cout<<"URI"<<endl;
                }
            }
        }
    }
    return 0;
}
