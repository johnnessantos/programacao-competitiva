#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    string nome;

    cin>>n;
    while(n){
        cin>>nome;
        scanf("%*d");
        if(nome == "Thor") printf("Y\n");
        else printf("N\n");
        n--;
    }
    return 0;
}
