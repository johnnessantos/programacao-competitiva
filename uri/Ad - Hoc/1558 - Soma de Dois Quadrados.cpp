#include<iostream>
#include<cmath>
using namespace std;

int pot2(int x){
    return x*x;
}

int quad(int x, int i){
    int temp = (int) x - (i*i);
    return (int)sqrt(temp);
}
bool perfeito(int N){
    int t = (int)sqrt(N);
    return t*t == N;
}

int main(){
    int N,i,s;
    bool achou;
    while(cin>>N){
        if (!perfeito(N)){
            i = 1;
            s = (int) sqrt(N);
            achou = false;
            while(i <= s && !achou ){
                achou = pot2(i) + pot2(quad(N,i)) == N;
                i++;
            }
            if(achou) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
