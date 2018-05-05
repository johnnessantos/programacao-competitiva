#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    int i,A,D;
    int At[11],Def[11];

    while (cin>>A>>D && (A!=0 && D!=0)){
        for(i=0;i<A;i++) cin>>At[i];
        for(i=0;i<D;i++) cin>>Def[i];
        if (D > 1){
            vector <int> pAt(At,At+A);
            sort(pAt.begin(), pAt.end());
            vector <int> pDef(Def,Def+D);
            sort(pDef.begin(), pDef.end());
            if (pAt[0] >= pDef[1]){
                cout<<"N"<<endl;
            }else{
                cout<<"Y"<<endl;
            }
        } else {
            cout<<"Y"<<endl;
        }

    }
    return 0;
}
