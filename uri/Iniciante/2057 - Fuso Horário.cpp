#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,t,f;

    cin>>s>>t>>f;
    s = s+t+f;
    printf("%d\n",s>=0 ? s%24 : 24+s);
    return 0;
}

