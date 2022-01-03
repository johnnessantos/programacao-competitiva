#include<bits/stdc++.h>

using namespace std;


const string EOF_STR = "--";

int main(){
    map<string, string> gifts;
    string child, gift;

    cin>>child>>gift;

    while(child != EOF_STR){
        gifts[child] = gift;
        cin>>child>>gift;
    }

    while(cin>>child){
        if (gifts.find(child) != gifts.end()){
            cout<<"Child: "<<child<<endl;
            cout<<"Gift "<<gifts.find(child)->second<<endl;
        }else{
            cout<<"404 not found"<<endl;
        }
        cout<<endl;
    }

    return 0;
}