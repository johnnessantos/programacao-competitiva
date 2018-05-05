#include<iostream>
using namespace std;

int main (){

    string tag,result;
    int i,tam;
    bool italico, negrito;
    char comp;
    while (getline(cin, tag)) {
        result = "";
        italico = false;
        negrito = false;

        tam = tag.size();
        for (i=0; i<tam; i++){
            comp = tag[i];
            if (comp == '_') {
                if (!italico) {
                    result = result + "<i>";
                    italico = true;
                } else {
                    result = result + "</i>";
                    italico = false;
                }
            } else {
                if(tag[i] == '*') {
                    if (!negrito) {
                        result = result + "<b>";
                        negrito = true;
                    } else {
                        result = result + "</b>";
                        negrito = false;
                    }
                } else {
                    result = result + tag[i];
                }
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
