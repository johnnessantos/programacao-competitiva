#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cont,temp;
    int bola[3];
    while(cin>>n && n!=-1){
        cont = 0;
        bola[0] = bola[1] = bola[2] = n;
        while(bola[0]){
            if(bola[2]==-1){
                bola[1]--;
                bola[2] = bola[1];
            }
            if(bola[1]==0){
                bola[0]--;
                bola[1] = bola[2] = bola[0];
            }
            temp = bola[0]*bola[1] + bola[0]*bola[2] + bola[1]*bola[2];
            if(temp==n) {
                cont++;
                bola[2]--;
            }else{
                if(temp>n){
                    bola[2]--;
                }else{
                    bola[1]--;
                    bola[2] = bola[1];
                }
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}

