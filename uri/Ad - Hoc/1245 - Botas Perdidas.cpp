#include<iostream>
using namespace std;

const int base=30;
int main (){

    int PE[31],PD[31];
    int i,n,qtd,tam;
    char l;

    while (cin>>n){
        qtd = 0;
        for (i=0; i<31; i++){
            PE[i]=0;
            PD[i]=0;
        }

        for (i=0; i<n; i++){
            cin>>tam>>l;
            if (l == 'D'){
                if (PE[tam - base] > 0){
                    qtd++;
                    PE[tam - base]--;
                } else {
                    PD[tam - base]++;
                }
            } else {
                if (PD[tam - base] > 0){
                    qtd++;
                    PD[tam - base]--;
                }else {
                    PE[tam - base]++;
                }
            }
        }
        cout<<qtd<<endl;
        n--;
    }

    return 0;
}
