#include<bits/stdc++.h>
using namespace std;
const int win[] = {0,2,1,1,0,2,2,1,0};

typedef struct no{
    string t;
    int pt;
}tNo;

bool sCompare(const tNo& A,const tNo& B ){
    return A.pt > B.pt;
}

int busca(char x){
    if(x == 'R') return 0;
    if(x == 'G') return 1;
    return 2;
}

int main(){
    int n, p, aux;
    char x,y;
    tNo pts[3];

    cin>>n;
    while(n){
        cin>>p;
        pts[0].t = "red";
        pts[1].t = "green";
        pts[2].t = "blue";
        pts[0].pt = pts[1].pt = pts[2].pt = 0;
        for(int i=0; i<p; i++){
            cin>>x>>y;
            aux = busca(x);
            pts[aux].pt = pts[aux].pt + win[aux*3 + busca(y)];
        }
        sort(pts, pts+3, sCompare);
        if(pts[0].pt==pts[1].pt && pts[1].pt==pts[2].pt){
            printf("trempate\n");
        }else{
            if(pts[0].pt==pts[1].pt) printf("empate\n");
            else printf("%s\n",pts[0].t.data());
        }
        n--;
    }

    return 0;
}
