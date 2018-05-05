#include<iostream>
#include<iomanip>
using namespace std;
float n1,n2,n3,n4,media;
int main(){

    cin>>n1>>n2>>n3>>n4;
    media=((n1*2) + (n2*3)+(n3*4)+ (n4)) / 10;
    cout<<fixed<<setprecision(1)<<"Media: "<<media<<"\n";
    if(media>=7.0){
        cout<<"Aluno aprovado.\n";
    }else{
        if(media>=5.0){
            cout<<"Aluno em exame.\n";
            cin>>n1;
            cout<<fixed<<setprecision(1)<<"Nota do exame: "<<n1<<endl;
            media=(media+n1)/2.0;
            if(media>=5.0){
                cout<<"Aluno aprovado.\n";
            }else{
                cout<<"Aluno reprovado.\n";
            }
            cout<<fixed<<setprecision(1)<<"Media final: "<<media<<"\n";
        }else{
            cout<<"Aluno reprovado.\n";
        }
    }
    return 0;
}
