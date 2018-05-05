#include<iostream>
#include<fstream>

using namespace std;

int main () {
    int loop[10001];
    int i,N,atual;
    bool crescente; // True case is growing
    int pontoInflex;
    ifstream in("1089.txt");

    while (in>>N && N!=0){
        pontoInflex = 0;
        crescente = true;
        for(i=0;i<N;i++){
            in>>loop[i];
        }
        loop[N+1] = loop[0];
        atual = loop[0];
        i=1;
        while (i<=N){
            if (atual < loop[i]) pontoInflex++;
            while (i<=N && atual < loop[i]) {
                atual = loop[i];
                i++;
            }
            if (atual > loop[i]) pontoInflex++;
            while (i<=N && atual > loop[i]) {
                atual = loop[i];
                i++;
            }

        }
        cout<<pontoInflex<<endl;
    }
    return 0;
}
