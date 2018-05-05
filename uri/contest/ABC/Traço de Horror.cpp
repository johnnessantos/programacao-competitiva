#include<iostream>
using namespace std;

int main (){
    int t,n,c,s,caso;

    cin>>t;
    caso = 1;
    while (t>0){
        cin>>n;
        s = 0;
        while (n>0){
            cin>>c;
            if (c>s) s = c;
            n--;
        }
        cout<<"Case "<<caso++<<": "<<s<<endl;
        t--;
    }
    return 0;
}
