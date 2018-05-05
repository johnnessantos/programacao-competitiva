#include<iostream>
using namespace std;

void Debitar(int v[], int y, int x, int valor){ // charge of y and deposit in x
    v[y] -=valor;
    v[x]+=valor;
}

bool Check (int v[], int B){ //check if has not value negative
    int i;
    for(i=1;i<=B;i++) if(v[i]<0) return false; // if there is return false, not is possible
    return true; // else is possible .
}

int main(){
    int v[21],B,N;
    int i,j;
    int devedor, credor, valor;
    while (cin>>B>>N && (B!=0 || N!=0)) {
        for(i=1;i<=B;i++) cin>>v[i]; //startup banks

        for(i=0;i<N;i++){
            cin>>devedor>>credor>>valor;
            Debitar(v, devedor, credor, valor);
        }
        if (Check(v, B)) cout<<'S'<<endl;
        else cout<<'N'<<endl;
    }

    return 0;
}
