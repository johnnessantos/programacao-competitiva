#include<iostream>
using namespace std;

int main(){
    int t,n,i,c=1;
    int jogadores[10];
    cin>>t;
    while(t>0){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>jogadores[i];
        }
        cout<<"Case "<<c<<": "<<jogadores[n/2]<<endl;
        c++;
        t--;
    }
    return 0;
}
