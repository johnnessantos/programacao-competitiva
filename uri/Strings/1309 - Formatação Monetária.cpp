#include<bits/stdc++.h>
using namespace std;

int main(){
    string dol;
    int v, cent;
    while(cin>>dol>>cent){
        v = 3 - dol.size()%3;
        printf("$");
        for(int i=0; i<dol.size(); i++) {
            cout<<dol[i];
            v++;
            if(v%3==0 && i<dol.size()-1) printf(",");
        }
        printf(".%.2d\n", cent);

    }
    return 0;
}
