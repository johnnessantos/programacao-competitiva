#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Data {
    int points;
    int gp;
    int gc;
    int equipe;
    float reason;
};

bool Compare(const Data& A, const Data& B) {
    if (A.points == B.points) {
        if (A.reason == B.reason ){
            return A.gp > B.gp;
        }else {
            return A.reason > B.reason;
        }
    } else {
        return A.points > B.points;
    }
}

int main (){

    vector < Data > Bask;
    Data no;

    int i,turn,N,c;
    int x,y,z,w;
    c = 1;

    while (cin>>N && N!=0){
        if (c > 1) cout<<endl;
        cout<<"Instancia "<<c++;
        turn  = (N*(N-1))/2;

        no.gc =0;
        no.gp =0;
        no.points = 0;
        no.reason = 0.0;
        for(i=1;i<=N;i++){
            no.equipe = i;
            Bask.push_back(no);
        }
        for (i=0; i < turn; i++ ){
            cin>>x>>y>>z>>w;
            Bask[x-1].gp +=y;
            Bask[x-1].gc +=w;
            Bask[z-1].gp +=w;
            Bask[z-1].gc +=y;
            if (y>w){
                Bask[x-1].points+=2;
                Bask[z-1].points++;
            }else{
                Bask[z-1].points+=2;
                Bask[x-1].points++;
            }
        }
        for (i=0;i<N;i++){
            if (Bask[i].gc > 0) Bask[i].reason = (float)Bask[i].gp/Bask[i].gc;
            else Bask[i].reason = (float)Bask[i].gp;
        }
        sort(Bask.begin(), Bask.end(), Compare);
        cout<<endl<<Bask[0].equipe;
        for(i=1;i<N;i++){
            cout<<" "<<Bask[i].equipe;
        }
        cout<<endl;
        Bask.clear();
    }
    return 0;
}
