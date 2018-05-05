#include<iostream>
using namespace std;

int main(){
    int K[] = {1,3,5,10,25,50,100};
    int n,i=0;

    cin>>n;
    while(K[i]<n) i++;
    cout<<"Top "<<K[i]<<endl;
    return 0;
}
