#include<iostream>
#include<algorithm>
using namespace std;

int cup[1000];
int dif(int i, int j){ return min(abs(i-j), 24 - abs(i-j)); }

int main(){
    int N,s,c;

    cin>>N;
    for(int i=0; i<N; i++) cin>>cup[i];
    sort(cup, cup+N);
    c = dif(cup[N-1], cup[0]);
    s = 0;
    for(int i=0; i<N; i+=2) s = s + dif(cup[i],cup[i+1]);
    for(int i=1; i<N-1; i+=2) c = c + dif(cup[i], cup[i+1]);
    cout<<min(s,c)<<endl;

    return 0;
}
