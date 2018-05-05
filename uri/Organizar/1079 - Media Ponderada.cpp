#include<iostream>
#include<iomanip>
using namespace std;
float a,b,c;
void mediaPonderada(int n){
    if(n>0){
        cin>>a>>b>>c;
        cout<<fixed<<setprecision(1)<<((a*2)+(b*3)+(c*5))/10<<endl;
        mediaPonderada(--n);
    }
}
int main(){
    int n;
    cin>>n;
    mediaPonderada(n);
    return 0;
}

