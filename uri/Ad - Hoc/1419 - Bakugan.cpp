#include<iostream>
using namespace std;

int verify(int v[], int tam){
    for(int i=1; i < tam-1; i++){
        if (v[i-1] == v[i] && v[i] == v[i+1]) return i+1;
    }
    return 0;
}

int main (){
    int i,R,pm,pl,m,l;
    int Mark[10], Leti[10];
    while (cin>>R && (R!=0)){
        pm = 0;
        pl = 0;
        for(i=0; i<R; i++){
            cin>>Mark[i];
            pm = pm + Mark[i];
        }
        for(i=0; i<R; i++){
            cin>>Leti[i];
            pl = pl + Leti[i];
        }
        m = verify(Mark,R);
        l = verify(Leti,R);
        if (m!=0){
            if (m<l || l==0)pm +=30;
        }
        if (l!=0){
            if (l<m || m==0)pl +=30;
        }
        if (pm==pl){
            cout<<"T"<<endl;
        }else{
            if(pm>pl) cout<<"M"<<endl;
            else cout<<"L"<<endl;
        }
    }
    return 0;
}
