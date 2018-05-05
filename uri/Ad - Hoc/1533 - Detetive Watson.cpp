#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    int Wat[1000];
    vector < int > Suspect;
    int i,N,S;

    while(cin>>N && N!=0){
        for(i=0;i<N;i++){
            cin>>Wat[i];
            Suspect.push_back(Wat[i]);
        }
        sort(Suspect.begin(),Suspect.end());
        i = 0;
        while (Wat[i]!= Suspect[N-2]) i++;
        cout<<(i+1)<<endl;
        Suspect.clear();
    }
    return 0;
}
