/**
 * autor: Johnnes Santos
 * data: 25/01/2021
 * exercicio: 2381
**/
#include<bits/stdc++.h>

using namespace std;

int main(){
        int n, k;

        cin>>n>>k;
        string alunos[n];

        for(int i=0; i<n; i++) cin>>alunos[i];

        sort(alunos, alunos + n);

        cout<<alunos[k-1]<<endl;
        return 0;
}