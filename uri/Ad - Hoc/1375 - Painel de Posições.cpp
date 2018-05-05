#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct No{
    int car;
    int position;
};

bool compare(const No& A, const No& B){
    return A.position < B.position;
}

int main (){
    int i,p,N,C,P,adder;
    No value[1000];
    while(cin>>N && N!=0){
        for(i=0;i<N;i++){
            cin>>value[i].car>>value[i].position;
            value[i].position = (i+1) + value[i].position;
        }
        vector <No> race(value,value+N);
        sort(race.begin(),race.end(),compare);
        i = 1;
        p = 0;
        while (race[p].position == i){
            i++;
            p++;
        }
        if(p!=N){
            cout<<"-1"<<endl;
        }else{
            cout<<race[0].car;
            for (i=1;i<N;i++) cout<<" "<<race[i].car;
            cout<<endl;
        }
    }
    return 0;
}
