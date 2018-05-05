#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstring>
using namespace std;


int fib(int n , int &q){
    if (n == 0){
        q++;
        return 0;
    }
    if (n == 1){
        q++;
        return 1;
    }
    if (n > 1){
        q++;
        return fib(n-1,q) + fib(n-2,q);
    }
}

int main(){
    int t,x,q,f;

    cin>>t;
    while(t>0){
        cin>>x;
        q = 0;
        f = fib(x,q);
        printf("fib(%d) = %d calls = %d\n",x,q-1,f);
        t--;
    }

    return 0;
}
