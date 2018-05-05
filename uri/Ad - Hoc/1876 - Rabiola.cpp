#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int c;
    vector <int> contador;
    vector <int> :: iterator it;

    while(cin>>s){
        contador.push_back(0);
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'o') contador[contador.size()-1]++;
            if(s[i] == 'x') contador.push_back(0);
        }

        if(contador.size()> 2){
            for(int i=1; i<contador.size()-1; i++) contador[i] = contador[i]/2;
        }
        it = max_element(contador.begin(), contador.end());
        cout<< (*it)<<endl;
        contador.clear();
    }

    return 0;
}
