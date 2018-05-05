#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,p,l,i;
    long long int total;

    while(cin>>m>>n>>p && (m!=0 || n!=0 || p!=0)){
        int pos[m];
        for(i=0; i<m; i++) pos[i]=n;
        total = 0;
        i=0;
        for(int j=0; j<p; j++){
            cin>>l;
            if(l<=n){
               pos[i]=l-1;
            }else{
                i = i + l/n;
                if(l%n==0){
                    pos[i-1] =  n-1;
                }else{
                    pos[i] = l%n-1;
                }
            }
            i++;
        }
        for(int i=0; i<m; i++) total= total + (n-pos[i]);
        cout<<"Lights: "<<total<<endl;
    }
    return 0;
}
