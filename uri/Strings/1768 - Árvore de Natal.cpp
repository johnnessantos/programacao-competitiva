#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,car, esp;

    while(cin>>n){
        esp = n/2;
        car = 1;
        while(esp>=0){
            for(int i=0; i<esp; i++) printf(" ");
            for(int i=0; i<car; i++) printf("*");
            printf("\n");
            esp--;
            car += 2;
        }

        esp = n/2;
        car = 1;
        while(car<=3){
            for(int i=0; i<esp; i++) printf(" ");
            for(int i=0; i<car; i++) printf("*");
            printf("\n");
            esp--;
            car += 2;
        }
        printf("\n");
    }
    return 0;
}
