#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
const char to32[] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";

int main(){
    ulli N;
    while(cin>>N){
        if(N==0) {
            printf("0\n");
            break;
        }
        while(N){
            printf("%c", to32[N%32]);
            N = N/32;
        }
        printf("\n");
    }
    return 0;
}
