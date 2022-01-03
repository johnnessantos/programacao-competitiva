#include<bits/stdc++.h>

using namespace std;


int main(){
    int C, W, index_city, index_destination_city;
    string city, destination_city;
    map<string, int> cities;
    set<string> cities_visited;

    cin>>C>>W;
    int traced_paths[C][C];

    for(int i=0; i<C; i++){
        cin>>city;
        cities[city] = i;
        for(int j=0; j<C; j++) traced_paths[i][j] = 0;
    }

    for(int i=0; i<W; i++){
        cin>>city>>destination_city;
        index_city = cities[city];
        index_destination_city = cities[destination_city];
        traced_paths[index_city][index_destination_city] = 1;
    }

    for(int i=0; i<C; i++){
        for(int j=0; j<C; j++){
            cout<<traced_paths[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}