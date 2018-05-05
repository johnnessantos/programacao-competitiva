#include<iostream>
using namespace std;
int main(){
    int N[20];
    int i;

    for(i=19;i>=0;i--){
        cin>>N[i];
    }
    for(i=0;i<20;i++){
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
    return 0;
}
