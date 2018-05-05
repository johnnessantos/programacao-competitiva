#include<iostream>
using namespace std;

int smaller(int a, int b){
    if (a>b) return b;
    return a;
}

int main (){
    int n;
    string a,b,result;
    int i,tam;

    cin>>n;
    while (n > 0){
        result = "";
        cin>>a>>b;
        tam = smaller(a.size(), b.size());
        for (i=0; i<tam; i++){
            result = result + a[i] + b[i];
        }
        if (a.size()!=b.size()){
            if (a.size() == tam ) {
                for (i=tam; i<b.size(); i++) result = result + b[i];
            }else {
                for (i=tam; i<a.size(); i++) result = result + a[i];
            }
        }
        cout<<result<<endl;
        result = "";
        n--;
    }
    return 0;
}
