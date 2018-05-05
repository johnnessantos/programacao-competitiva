#include <iostream>
#include<cmath>
using namespace std;

int main (){
    int N,i,satisfatorio;
    short c;

    cin>>N;
    satisfatorio = 0;
    for (i=0;i<N;i++){
        cin>>c;
        if (c == 0) {
            satisfatorio++;
        }
    }
    if (satisfatorio > N/2.0) {
        cout<<"Y"<<endl;
    }else {
        cout<<"N"<<endl;
    }

    return 0;
}

