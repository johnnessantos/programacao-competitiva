#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int L,V,i,maior;

    while(cin>>L){ //While not is the final file
        maior = 0;
        for(i=0;i<L;i++){
            cin>>V;
            if (V > maior ) maior = V; // if V is bigger than maior
        }
        if (maior < 10 ){
            cout<<1<<endl;
        }else {
            if (maior <20 ) {
                cout<<2<<endl;
            }else {
                cout<<3<<endl;
            }
        }

    }
    return 0;
}
