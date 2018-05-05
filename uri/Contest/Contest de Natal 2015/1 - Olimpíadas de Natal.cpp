#include<bits/stdc++.h>
using namespace std;
typedef struct no{
    string nome;
    int med[3];
}tNo;

bool vCompare(const tNo &A, const tNo &B){
    if(A.med[0]==B.med[0]){
        if(A.med[1]==B.med[1]){
                if(A.med[2]==B.med[2]){
                        int m = min(A.nome.size(),B.nome.size());
                        for(int i=0; i<m; i++){
                            if(A.nome[i]!=B.nome[i]){
                                return A.nome[i] < B.nome[i];
                            }
                        }
                        return false;
                }else{
                    return A.med[2]>B.med[2];
                }
        }else{
            return A.med[1]>B.med[1];
        }
    }else{
        return A.med[0]> B.med[0];
    }
}

int main(){
    tNo ini;
    ini.med[0] = ini.med[1] = ini.med[2] = 0;
    map <string, int> pais;
    vector<tNo> tab;
    map <string, int> :: iterator it;
    string m,p;

    while(getline(cin,m)){
        for(int i=0; i<3; i++){
            getline(cin,p);
            it = pais.find(p);
            if(it==pais.end()){
                pais[p] = tab.size();
                ini.nome = p;
                tab.push_back(ini);
            }
            tab[pais[p]].med[i]++;
        }
    }
    sort(tab.begin(), tab.end(), vCompare);
    cout<<"Quadro de Medalhas"<<endl;
    for(int i=0; i<tab.size(); i++){
        cout<<tab[i].nome<<" "<<tab[i].med[0]<<" "<<tab[i].med[1]<<" "<<tab[i].med[2]<<endl;
    }
    return 0;
}
