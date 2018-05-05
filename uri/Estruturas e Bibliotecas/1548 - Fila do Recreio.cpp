#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,total;
    int alunos[1000], aux[1000];

    cin>>n;
    while(n){
        total = 0;
        cin>>m;
        for(int i=0; i<m; i++){
            cin>>alunos[i];
            aux[i] = alunos[i];
        }
        sort(alunos, alunos+m);
        m--;
        for(int i=0; i<=m; i++){
            if(alunos[m-i]==aux[i]) total++;
        }
        cout<<total<<endl;
        n--;
    }
    return 0;
}
