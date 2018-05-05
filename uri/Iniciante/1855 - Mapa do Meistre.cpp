#include<iostream>
using namespace std;

bool borda(int x,int y, int i, int j){
    return ( (i==0&&j==0) || (i==y&&j==0) || (i==0&&j==x) || (i==y&&j==x) );
}
int main(){
    int i,j,x,y;
    int ant[]={0,0};
    cin>>x>>y;
    char mp[y][x];
    int temp[y][x];

    for(i=0; i<y; i++){
        for(j=0; j<x; j++){
            cin>>mp[i][j];
            temp[i][j] = 0;
        }
    }
    x--;
    y--;
    i = j = 0;
    temp[0][0] = 1;
    while(mp[i][j]!='*' && temp[i][j]<=1){
        if(mp[i][j]=='>'){
            ant[0]=0;
            ant[1]=1;
        }
        if(mp[i][j]=='<'){
            ant[0]=0;
            ant[1]=-1;
        }
        if(mp[i][j]=='^'){
            ant[0]=-1;
            ant[1]=0;
        }
        if(mp[i][j]=='v'){
            ant[0]=1;
            ant[1]=0;
        }
        i += ant[0];
        j += ant[1];
        if(i<0 || i>y) i = 0;
        if(j<0 || j>x) j = 0;
        temp[i][j]++;
    }
    if(mp[i][j]=='*') cout<<"*"<<endl;
    else cout<<"!"<<endl;
    return 0;
}
