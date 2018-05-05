#include<iostream>
using namespace std;

void inicia(int m[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)m[i][j] = 0;
    }
}

int main (){
    int T,i,j,aux,q;
    int matrix[9][9];


    cin>>T;
    while (T>0){
        q = 1;
        inicia(matrix);
        for(i=0;i<9; i = i+2){
            if (i%2 == 0){
                int p = 0;
                for(j=0;j<q; j++ ){
                    cin>>matrix[i][p];
                    p+=2;
                }
                q++;
            }
        }
        q = 2;
        int col;
        for(i=0;i<9;i=i+2){
            j = 1;
            aux = q;
            col = 0;
            while (j<9 && aux > 0){
                matrix[i+2][j] = (int)(matrix[i][col] - (matrix[i+2][j-1]+matrix[i+2][j+1]))/ 2;
                aux --;
                j+=+2;
                col+=2;
            }
            q++;
        }

        q = 2;
        for(i=1;i<8;i=i+2){
            for(j=0;j<q;j++) matrix[i][j] = matrix[i+1][j] + matrix[i+1][j+1];
            q=q+2;
        }

        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(j <i) cout<<matrix[i][j]<<" ";
                if(j==i) cout<<matrix[i][j]<<endl;
            }
        }
        T--;
    }
    return 0;
}
