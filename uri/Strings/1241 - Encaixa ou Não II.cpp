#include<iostream>
using namespace std;

int main (){
    int i,j,n;
    bool encaixa;
    string a,b;

    cin>>n;
    while (n > 0){
        cin>>a>>b;
        encaixa = true;
        if (a.size() < b.size()){
            cout<<"nao encaixa"<<endl;
        } else {
            j = a.size() - 1;
            for (i = (b.size() - 1); i>=0 ; i--){
                encaixa = encaixa and (a[j--]==b[i]);
            }
            if (encaixa) {
                cout<<"encaixa"<<endl;
            } else {
                cout<<"nao encaixa"<<endl;
            }
        }
        n--;
    }

    return 0;
}
