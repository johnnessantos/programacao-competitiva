#include<iostream>
using namespace std;

long long int fibonacci(int n){
    int i;
    if(n==0){
        return 0;
    }else{
        if(n==1){
            return 1;
        }else{

            unsigned long long int fibo[n];
            fibo[0]=1;
            fibo[1]=1;
            for(i=2;i<n;i++){
                fibo[i] = fibo[i-1] + fibo[i-2];
            }
            return fibo[n-1];
        }
    }
}

int main(){
    int t,n;
    cin>>t;
    while(t>0){
        cin>>n;
        cout<<"Fib("<<n<<") = "<<fibonacci(n)<<endl;
        t--;
    }
    return 0;
}
