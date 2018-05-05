#include<iostream>
using namespace std;
int main(){
    int N[1000];
    int t,i,j;
    cin>>t;
    j=0;
    for(i=0;i<1000;i++){
        if(j==t) j=0;
        N[i]=j;
        j++;
    }
    for(i=0;i<1000;i++){
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
    return 0;
}
