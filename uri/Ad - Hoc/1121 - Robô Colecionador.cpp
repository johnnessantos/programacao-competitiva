#include<bits/stdc++.h>
using namespace std;
int n,m,s,cont;

typedef struct robo{
    int x,y;
    char p;
} tRobo;

bool igual(char c, char d) {return c==d;}

tRobo mov(tRobo r, char inst, char mat[100][100]){
    switch(r.p){
        case 'N':
           if(inst=='D'){
                r.p = 'L';
           }else{
                if(inst=='E'){
                    r.p = 'O';
                }else{
                    if(mat[r.x-1][r.y]!='#' && r.x>0){
                        r.x--;
                        if(mat[r.x][r.y]=='*') cont++;
                    }
                }
           }
        break;

        case 'S':
            if(inst=='D'){
                r.p = 'L';
            }else{
                if(inst=='E'){
                    r.p = 'O';
                }else{
                    if(mat[r.x+1][r.y]!='#' && r.x<n){
                        r.x++;
                        if(mat[r.x][r.y]=='*') cont++;
                    }
                }
            }
        break;

        case 'L':
            if(inst=='D'){
                r.p = 'S';
            }else{
                if(inst=='E'){
                    r.p = 'N';
                }else{
                    if(mat[r.x][r.y+1]!='#' && r.y<m) {
                        r.y++;
                        if(mat[r.x][r.y]=='*') cont++;
                    }
                }
           }
        break;

        case 'O':
            if(inst=='D'){
                r.p = 'N';
            }else{
                if(inst=='E') r.p = 'S';
                else{
                    if(mat[r.x][r.y-1]!='#' && r.y>0){
                        r.y--;
                        if(mat[r.x][r.y]=='*') cont++;
                    }
                }
            }
        break;
    }
    return r;
}
int main(){
    int i,j;
    tRobo r;
    char in,mat[100][100];

    while(cin>>n>>m>>s && n!=0 && m!=0 && s!=0){
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++) {
                cin>>mat[i][j];
                if(mat[i][j]=='N' || mat[i][j]=='S' && mat[i][j]=='L' || mat[i][j]=='O'){
                    r.x = i;
                    r.y = j;
                    r.p = mat[i][j];
                }
            }
        }
        cont = 0;
        for(i=0; i<s; i++){
            cin>>in;
            r = mov(r,in,mat);
        }
        cout<<cont<<endl;
    }
    return 0;
}
