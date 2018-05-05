#include<bits/stdc++.h>
using namespace std;

typedef struct No {
    string nome;
    int pts, vit, gols, ap;
}tNo;

bool sCompare (const tNo& A, const tNo& B){
    if(A.pts == B.pts){
        if(A.vit == B.vit){
            if(A.gols == B.gols){
                return A.ap < B.ap;
            }else{
                return A.gols > B.gols;
            }
        }else{
            return A.vit > B.vit;
        }
    }else{
        return A.pts > B.pts;
    }
}
int main(){
    tNo camp[100];
    map <string, int> keys;
    tNo timeA, timeB;
    int N, T, P;

    cin>>N;
    while(N){
        cin>>T>>P;
        for(int i=0; i<T; i++){
            cin>>camp[i].nome;
            camp[i].pts = 0;
            camp[i].vit = 0;
            camp[i].gols = 0;
            camp[i].ap = i;
            keys[camp[i].nome] = i;
        }
        for(int i=0; i<P; i++){
            cin>>timeA.gols>>timeA.nome>>timeB.gols>>timeB.nome;
            camp[keys[timeA.nome]].gols += timeA.gols;
            camp[keys[timeB.nome]].gols += timeB.gols;
            if(timeA.gols == timeB.gols){
                camp[keys[timeA.nome]].pts++;
                camp[keys[timeB.nome]].pts++;
            }else{
                if(timeA.gols > timeB.gols){
                    camp[keys[timeA.nome]].pts += 3;
                    camp[keys[timeA.nome]].vit++;
                }else{
                    camp[keys[timeB.nome]].pts += 3;
                    camp[keys[timeB.nome]].vit++;
                }
            }
        }
        sort(camp, camp+T,sCompare);
        for(int i=0; i<T; i++){
            cout<<camp[i].nome<<endl;
        }
        N--;
    }

    return 0;
}
