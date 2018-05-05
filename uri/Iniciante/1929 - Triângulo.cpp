#include<iostream>
using namespace std;

bool trg(int a, int b, int c){
    return a<(b+c) && b<(a+c) && c<(a+b);
}
int main(){
    int ld[4];
    bool tring = false;

    for(short i=0; i<4; i++) cin>>ld[i];
    if(trg(ld[0],ld[1],ld[2]) || trg(ld[0],ld[1],ld[3]) || trg(ld[0],ld[2],ld[3]) || trg(ld[1],ld[2],ld[3])) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
