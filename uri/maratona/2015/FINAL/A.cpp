#include<iostream>
using namespace std;

int encontrou(int numbers[], int x){
    bool flag = false;
    while(x>=0 && !flag){
        if(numbers[x]>=2) x--;
        else flag = true;
    }
    return x;
}

int main(){
    int numbers[10] = {0};
    int aux[10],e,i = 0;
    string U;
    cin>>U;

    if(U.size()==19) U = "999999999999999999";

    while(i<U.size()){
        numbers[(U[i]-48)]++;
        if(numbers[(U[i]-48)]<=2){
            i++;
        }else{
            e = encontrou(numbers, U[i]-48 );
            while(e == -1){
                numbers[(U[i]-48)]--;
                i--;
                e = encontrou(numbers, U[i]-48 );
            }
            numbers[U[i]-48]--;
            U[i] = e + 48;
            numbers[e]++;
            i++;

            for(int c=0; c<10; c++)aux[c] = numbers[c];
            int k = 9;
            for(int j=i; j<U.size(); j++){
                U[j] = encontrou(aux, k) + 48;
                k = U[j]-48;
                aux[k]++;
            }
        }
    }
    cout<<U<<endl;
    return 0;
}
