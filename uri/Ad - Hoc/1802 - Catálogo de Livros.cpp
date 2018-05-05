#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define TOTAL 5
int main(){
    //P,M,F,Q,B;
    short preco[5][10];
    int k,soma,mat[TOTAL];
    vector <int > conjunto;

    for(int i=0; i<TOTAL; i++){
        cin>>mat[i];
        for(int j=0; j<mat[i]; j++) cin>>preco[i][j];
    }
    cin>>k;

    for(int p=0; p<mat[0]; p++){
        for(int m=0; m<mat[1]; m++){
            for(int f=0; f<mat[2]; f++){
                for(int q=0; q<mat[3]; q++){
                    for(int b=0; b<mat[4]; b++){
                        conjunto.push_back(preco[0][p]+ preco[1][m]+ preco[2][f]+ preco[3][q]+ preco[4][b]);
                    }
                }
            }
        }
    }
    soma = 0;
    sort(conjunto.begin(), conjunto.end());
    for(int i=1; i<=k; i++) soma +=conjunto[conjunto.size()-i];
    cout<<soma<<endl;

    return 0;
}
