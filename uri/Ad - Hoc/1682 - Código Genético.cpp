#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char gen[3] = {'P','O','N'};
    sort(gen, gen+3);
    string r = "";

    do{
        r = r+gen[0]+gen[1];
        r = r+gen[2]+gen[1];
    }while(next_permutation(gen, gen+3));
    cout<<r<<endl;
    return 0;
}

