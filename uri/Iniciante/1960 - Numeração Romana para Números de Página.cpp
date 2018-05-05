#include<bits/stdc++.h>
using namespace std;

int main(){
    int dec[] = { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string rom[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" };
    int n,p=12;
    string res = "";

    cin>>n;
    while(n>0){
        if(n>=dec[p]){
            n = n- dec[p];
            res = res + rom[p];
        }else{
            p--;
        }
    }
    cout<<res<<endl;

    return 0;
}
