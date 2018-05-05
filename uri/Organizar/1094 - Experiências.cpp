#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int c=0,s=0,r=0;
    int n,total=0,casos;
    char cobaia;
    cin>>n;

    while(n>0){
        cin>>casos>>cobaia;
        total+=casos;
        if(cobaia == 'C'){
            c+=casos;
        }else{
            if(cobaia == 'S'){
                s+=casos;
            }else{
                r+=casos;
            }
        }
        n--;
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<(c*100.0/total)<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<(r*100.0/total)<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<(s*100.0/total)<<" %"<<endl;

    return 0;
}
