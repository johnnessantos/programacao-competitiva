#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p=1, r=0, e = 1;
    long long int total = 0;

    cin>>n;
    int estrelas[n+2];
    estrelas[0] = estrelas[n+1] = -1;
    for(int i=1; i<=n; i++) {
        cin>>estrelas[i];
        total += estrelas[i];
    }

    while(e<=n && estrelas[e]%2==1) e++;
    if(e<=n) e++;
    while(estrelas[p]>=0){
        if(estrelas[p]==0){
            p--;
        }else{
            r++;
            if(estrelas[p]%2==0){
                estrelas[p--]--;
            }else{
                estrelas[p++]--;
            }
        }
    }
    cout<<e-1<<" "<<(total-r)<<endl;
    return 0;
}
