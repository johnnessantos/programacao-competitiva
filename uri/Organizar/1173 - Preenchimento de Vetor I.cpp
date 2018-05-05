#include<iostream>
using namespace std;

int main(){
    int N[10];
    int i;
    cin>>N[0];
    for(i=1;i<10;i++){
        N[i] = 2 * N[(i-1)];
    }
    for(i=0;i<10;i++){
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
    return 0;
}
