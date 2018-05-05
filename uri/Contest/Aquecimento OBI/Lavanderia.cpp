#include <iostream>
using namespace std;


int main (){
    int N, LA,LB,SA,SB;
    int maximo,c;

    cin>>N>>LA>>LB>>SA>>SB;
    if (N >= LA && N <= LB && N>= SA && N <= SB) {
        cout<<"possivel"<<endl;
    }else {
        cout<<"impossivel"<<endl;
    }

    return 0;
}
