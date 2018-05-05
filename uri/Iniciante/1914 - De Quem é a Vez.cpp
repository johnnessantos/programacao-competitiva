#include<iostream>
using namespace std;

int main (){
    string nome1, paridade1, nome2, paridade2,paridadeJogo;
    int n1,n2,t;

    cin>>t;
    while(t){
        cin>>nome1>>paridade1>>nome2>>paridade2;
        cin>>n1>>n2;
        if((n1+n2)%2 == 0) paridadeJogo = "PAR";
        else paridadeJogo = "IMPAR";
        if(paridadeJogo == paridade1) cout<<nome1<<endl;
        else cout<<nome2<<endl;
        t--;
    }
    return 0;
}
