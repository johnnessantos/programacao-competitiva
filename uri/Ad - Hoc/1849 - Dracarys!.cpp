#include<bits/stdc++.h>
using namespace std;

int pot2(int x){ return x*x; }
int quad(int base, int alt){ return pot2(min(base,alt)); }

int main(){
    int v[4],area[4];
    int men = 0;

    for(int i=0; i<4;i++) cin>>v[i];
    area[0] = quad(v[0]+v[2], min(v[1],v[3]));
    area[1] = quad(v[0]+v[3], min(v[1],v[2]));
    area[2] = quad(v[1]+v[2], min(v[0],v[3]));
    area[3] = quad(v[1]+v[3], min(v[0],v[2]));
    for(int i=0; i<4; i++) men = max(men, area[i]);
    printf("%d\n", men);
    return 0;
}
