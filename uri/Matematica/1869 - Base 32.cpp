#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
const char to32[] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";

int main(){
    ulli N;
    string numb;
    while(cin>>N){
        numb = "";
        if(N==0) {
            printf("0\n");
            break;
        }
        while(N){
            numb = to32[N%32] + numb;
            N = N/32;
        }
        printf("%s\n",numb.data());
    }
    return 0;
}
