#include<iostream>
using namespace std;

int main (){
    int n,c,i,j;
    int lucro = 0;
    int v[10000];

    cin>>n;
    for (i=0;i<n;i++){
        cin>>v[i];
    }

    for (i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            c = v[j]-v[i];
            if (lucro < c) lucro = c;
        }
    }
    cout<<lucro<<endl;
    return 0;
}
