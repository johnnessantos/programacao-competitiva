#include<bits/stdc++.h>
using namespace std;

int main(){
    string juiz, t1, t2;
    int n, pt1, pt2,p,erro, inst=1;

    cin>>n;
    cin.ignore();
    while(n){
        printf("Instancia %d\n",inst);
        pt1 = pt2 = 0;
        getline(cin,juiz);
        getline(cin,t1);
        getline(cin,t2);

        for(int i=0; i<juiz.size(); i++){
            if(juiz[i]==t1[i]) pt1++;
        }
        for(int i=0; i<juiz.size(); i++){
            if(juiz[i]==t2[i]) pt2++;
        }
        if(pt1==pt2) {
            erro = 0;
            p = -1; //time 1 errou
            while(erro<juiz.size() && p==-1){
                if(juiz[erro]==t1[erro] && juiz[erro]!=t2[erro]) p = 0;
                if(juiz[erro]!=t1[erro] && juiz[erro]==t2[erro]) p = 1;
                erro++;
            }
            if(p==-1)printf("empate\n");
            if(p==0) printf("time 1\n");
            if(p==1) printf("time 2\n");
        }else{
            if(pt1>pt2) printf("time 1\n");
            if(pt2>pt1) printf("time 2\n");
        }
        printf("\n");
        n--;
        inst++;
    }
    return 0;
}
