#include<iostream>
#include <set>
using namespace std;

#define MAX 201
int main(){
    int n,a,b;
    int mapa[MAX][MAX];
    set <int> borb;

    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin>>mapa[i][j];
    }

    for(int i=0; i<2*n; i++){
        cin>>a>>b;
        borb.insert(mapa[a][b]);
    }
    cout<<borb.size()<<endl;

    return 0;
}
