#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main (){
    int i,j,q,e;
    vector <int> visited;
    vector <int> :: iterator it;
    cin>>q>>e;
    for (i=0;i<e;i++){
        cin>>j;
        visited.push_back(j);
    }
    for (i=0;i<q;i++){
        cin>>j;
        it = find(visited.begin(),visited.end(), j);
        if (it != visited.end()){
            cout<<"0"<<endl;
        } else {
            cout<<"1"<<endl;
            visited.push_back(j);
        }
    }
    visited.clear();
    return 0;
}
