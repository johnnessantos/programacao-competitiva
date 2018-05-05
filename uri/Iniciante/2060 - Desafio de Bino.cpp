#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    int soma[4] = {0};
    int num[4] = {2,3,4,5};

    cin>>n;
    while(n){
        cin>>c;
        for(short i=0; i<4; i++){
            if(c%num[i]==0) soma[i]++;
        }
        n--;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",soma[0],soma[1],soma[2],soma[3]);
    return 0;
}
