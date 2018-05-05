#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int i,j;
    ifstream in("teste.txt");
    if(!in){
        return -1;
    }
    while(in>>i>>j){
            cout<<i<<" "<<j<<endl;
    }
    in.close();

    return 0;
}
