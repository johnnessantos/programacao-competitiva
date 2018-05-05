#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct No{
    int stick;
    int amount;
};

bool compare(const No& A, const No& B){
    return A.amount > B.amount;
}

int main (){
    int i,N,adder;
    No value[1000];
    while(cin>>N && N!=0){
        adder = 0;
        for(i=0;i<N;i++){
            cin>>value[i].stick>>value[i].amount;
            adder+=(value[i].amount/4);
            value[i].amount%=4;
        }
        vector < No > Scraps(value,value+N);
        sort(Scraps.begin(),Scraps.end(),compare);
        i = 0;
        while (i<N && (Scraps[i].amount > 1)){
            i++;
        }
        adder  = adder + (i/2);
        cout<<adder<<endl;
    }
    return 0;
}
