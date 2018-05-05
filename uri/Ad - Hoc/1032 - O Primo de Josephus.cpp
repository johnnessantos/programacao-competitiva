#include<bits/stdc++.h>
using namespace std;
#define MAX 3501

vector <short> prim(){
    vector <short> primos;
    short p[MAX+1] = {0};
    for(short i=2; i<=sqrt(MAX); i++){
        for(short j=4; j<=MAX; j++){
            if(i!=j && j%i==0) p[j]=1;
        }
    }

    for(short i=2; i<=MAX; i++) {
        if(p[i]==0) primos.push_back(i);
    }
    return primos;
}

int procurar(){
    vector <short> primos = prim();

}

int main(){

}
