#include<iostream>
#include<vector>
using namespace std;

int main (){
    int m,l,i,inst;
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char aux;
    string resultado = "";

    inst = 1;
    while (cin>>m && m!=0){
        vector <char> alf(alfabeto, alfabeto+26);
        vector <char> :: iterator it = alf.begin();

        for (i=0; i<m; i++){
            cin>>l;
            l--;
            aux = alf[l];
            resultado +=aux;
            alf.erase(it+l,it+l+1);
            alf.insert(alf.begin(),aux);
        }

        cout<<"Instancia "<<inst++<<endl;
        cout<<resultado<<endl<<endl;
        resultado = "";

    }

    return 0;
}
