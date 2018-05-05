#include<bits/stdc++.h>
using namespace std;

long long int solve(int n, int f){
    long long int s=n;
    int i=1;
    while((n-i*f)>=1){
        s = s*(n-i*f);
        i++;
    }
    return s;
}

int main(){
    int i,n, nb;
    string s;

    cin>>n;
    while(n){
        cin>>s;
        i = nb = 0;
        while(s[i]!='!') nb = nb*10 + (int)(s[i++]-'0');
        cout<<solve(nb,s.size()-i)<<endl;
        n--;
    }

    return 0;
}
