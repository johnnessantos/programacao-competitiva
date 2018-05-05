#include<iostream>>
using namespace std;

int main(){
    float i;
    float c;
    for(i=0;i<2.1;i=i+0.2){
        c=1+i;
        cout<<"I="<<i<<" J="<<c<<endl;
        cout<<"I="<<i<<" J="<<++c<<endl;
        cout<<"I="<<i<<" J="<<++c<<endl;
    }

    return 0;
}
