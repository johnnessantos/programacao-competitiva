#include<bits/stdc++.h>
using namespace std;

int main(){
    string alf = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int duende[27];
    int l,n,c=1;
    string r = "";

    while(cin>>n){
        cout<<"LISTA #"<<c<<":"<<endl;
        if(c>1)cout<<endl;
        for(int i=1; i<=26; i++) duende[i] = i;
        alf = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i=1; i<=n; i++){
            while(cin>>l){
                if(l==27){
                    r = r + " ";
                }else{
                    r = r + alf[duende[l]];
                    alf[0] = alf[duende[l]];
                    duende[0] = duende[l];
                    for(int i=l; i<26; i++){
                        alf[i] = alf[i+1];
                        duende[i] = duende[i+1];
                    }
                    alf[26] = alf[0];
                    duende[26] = duende[0];
                }
            }
            cout<<r<<endl;
        }
    }
    return 0;
}
