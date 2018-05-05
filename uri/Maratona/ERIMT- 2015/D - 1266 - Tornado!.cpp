#include<iostream>
using namespace std;

int main(){
    int N,c,p,rest;
    int pst[5001];

    while(cin>>N && N!=0){
        for(int i=0; i<N; i++) cin>>pst[i];
        p=0;
        while( p<N && pst[p]==0) p++;
        if(p==N){
            rest = N/2;
            if(N%2==1) rest++;
        }else{
            c = 0;
            rest = 0;
            for(int i=0; i<N; i++,p = (p+1)%N) {
                if(pst[p]==0){
                    c++;
                }else{
                    rest = rest + (c/2);
                    c=0;
                }
            }
            rest = rest + (c/2);
        }
        cout<<rest<<endl;
    }
    return 0;
}
