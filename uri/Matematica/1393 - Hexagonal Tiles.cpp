#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int mary[41];

    mary[0] = mary[1] = 1;
    for(int i=2; i<=40; i++) mary[i] = mary[i-1]+mary[i-2];
    while(cin>>n && n!=0) printf("%d\n", mary[n]);

    return 0;
}
