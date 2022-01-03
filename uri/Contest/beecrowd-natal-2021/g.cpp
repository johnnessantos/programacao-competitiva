#include<bits/stdc++.h>

using namespace std;


int main(){
    int N, T;
    string name, gift;
    
    vector<tuple<int, string, string>> v;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>name>>gift>>T;
        v.push_back(make_tuple(T, name, gift));
    }
    sort(v.begin(), v.end());

    for(int i=0; i<N; i++){
        cout<<get<1>(v.at(i))<<" "<<get<2>(v.at(i))<<" "<<get<0>(v.at(i))<<endl;
    }

    return 0;
}