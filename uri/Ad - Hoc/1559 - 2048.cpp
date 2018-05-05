#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

//https://www.urionlinejudge.com.br/judge/pt/problems/view/1559

int main(){
    int moviments[4]; //DOWN, LEFT, RIGH, UP.
    int N,i,j,q;
    int matriz[4][4];
    bool ganhou;
    string Mov[] = {"DOWN", "LEFT", "RIGHT", "UP"};
    cin>>N;
    while(N>0){
        ganhou = false;
        q = 0; //Amount of values the printer
        memset(moviments,0,sizeof(moviments));
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                cin>>matriz[i][j];
                ganhou = (ganhou || (matriz[i][j]==2048));
            }
        }
        if (!ganhou){
            // For down
            i = 0;
            j = 0;
            while(i<=2 && moviments[0]==0){
                if(matriz[i][j] !=0 && (matriz[i+1][j] == 0 || matriz[i+1][j] == matriz[i][j])) moviments[0] = 1;
                j++;
                if(j==4){
                    i++;
                    j = 0;
                }
            }
            // For left
            i = 0;
            j = 1;
            while(i<=3 && moviments[1]==0){
                if(matriz[i][j] !=0 && (matriz[i][j-1] == 0 || matriz[i][j] == matriz[i][j-1])) moviments[1] = 1;
                j++;
                if(j==4){
                    i++;
                    j = 1;
                }
            }

            // For right
            i = 0;
            j = 0;
            while(i<=3 && moviments[2]==0){
                if(matriz[i][j] !=0 && (matriz[i][j+1] == 0 || matriz[i][j] == matriz[i][j+1])) moviments[2] = 1;
                j++;
                if(j==3){
                    i++;
                    j = 0;
                }
            }
            // For up
            i = 1;
            j = 0;
            while(i<=3 && moviments[3]==0){
                if(matriz[i][j] !=0 && (matriz[i-1][j] == 0 || matriz[i][j] == matriz[i-1][j])) moviments[3] = 1;
                j++;
                if(j==4){
                    i++;
                    j = 0;
                }
            }
            q = count(moviments,moviments+4,1);
            if (q==0){
                cout<<"NONE"<<endl;
            }else{
                i = 0;
                while(q>0 && i<4){
                    if(moviments[i] == 1){
                        if (q>1) cout<<Mov[i]<<" ";
                        else cout<<Mov[i]<<endl;
                        q--;
                    }
                    i++;
                }
            }
        } else {
            cout<<"NONE"<<endl;
        }
        N--;
    }

    return 0;
}
