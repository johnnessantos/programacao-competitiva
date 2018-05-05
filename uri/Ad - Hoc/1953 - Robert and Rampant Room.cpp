#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,epr, ehd, intruso,rga;
    string curso;

    while(cin>>n){
        epr = ehd = intruso = 0;
        for(int i=0; i<n; i++){
            cin>>rga>>curso;
            if(curso.compare("EPR")==0) {
                epr++;
            }else{
                if(curso.compare("EHD")==0)ehd++;
                else intruso++;
            }
        }
        printf("EPR: %d\nEHD: %d\nINTRUSOS: %d\n", epr, ehd, intruso);
    }
    return 0;
}
