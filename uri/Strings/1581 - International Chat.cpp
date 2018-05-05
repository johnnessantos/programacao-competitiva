#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    string lang;

    cin>>n;
    while(n){
        cin>>t;
        set<string> chat;
        for(int i=0; i<t; i++){
            cin>>lang;
            chat.insert(lang);
        }
        if(chat.size()==1) cout<<*chat.begin()<<endl;
        else printf("ingles\n");
        n--;
    }

    return 0;
}
