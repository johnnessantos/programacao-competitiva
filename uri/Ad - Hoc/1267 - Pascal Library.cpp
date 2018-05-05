#include<iostream>
using namespace std;

bool verify(int alum[], int pos, int D){
    if (pos == -1){
        return false;
    } else {
        return (alum[pos]==D) || verify(alum, pos-1,D);
    }
}
int main (){
    int i,j,N,D,A;
    int alumni[100];

    while (cin>>N>>D && (N!=0 && D!=0)){
        for (i=0;i<N;i++) alumni[i]=0; //initializing
        for(i=0;i<D;i++){
            for (j=0;j<N;j++){
                cin>>A;
                alumni[j] = alumni[j]+A;
            }
        }
        if (verify(alumni,N-1,D)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
