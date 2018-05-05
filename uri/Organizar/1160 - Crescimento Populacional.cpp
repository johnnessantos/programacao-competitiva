#include<iostream>
using namespace std;

long long int crescimento(long long int pop , float cres){
    return (cres*pop)/100;
}

int main(){
    long long int n,pa,pb,anos;
    float ga,gb;

    cin>>n;
    while(n>0){
        cin>>pa>>pb>>ga>>gb;
        anos=0;
        while(pa<=pb && anos<=100){
            pa=pa+crescimento(pa,ga);
            pb=pb+crescimento(pb,gb);
            anos++;
        }
        if(anos>100){
            cout<<"Mais de 1 seculo."<<endl;
        }else{
            cout<<anos<<" anos."<<endl;
        }
        n--;
    }

    return 0;
}
