#include<iostream>
using namespace std;

int volta(int a , int b){
    int i=1;
    while((b*i) - (a*i) < b){
        i++;
    }
    return i;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<volta(a,b)<<endl;
    return 0;
}
