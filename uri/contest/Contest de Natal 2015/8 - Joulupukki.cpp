#include<bits/stdc++.h>
using namespace std;

int main(){
    string linha, palavra, r, noel=" oulupukk";
    int n,j;
    bool isNoel = true;
    scanf("%d ",&n);
    while (n>0){
        r = "";
        getline(cin,linha);
        for(int i=0; i<linha.size(); i++){
            isNoel = true;
            if(isalpha(linha[i])){
                j = 1;
                while(j<9 && isalpha(linha[i+j]) && isNoel){
                    isNoel = isNoel && linha[i+j]==noel[j];
                    j++;
                }
                if(isNoel && j==9){
                    linha[i] = 'J';
                    linha[i+j] = 'i';
                }
            }
        }
        cout<<linha<<endl;
        n--;
    }
    return 0;
}
