#include <iostream>
#include<cstdio>
#include <set>

using namespace std;

int main (){
    int N;
    set < pair<string,string> > elemento;
    set < pair<string,string> > :: iterator  it;
    pair<string,string> dado;
    elemento.insert(make_pair("tesoura","papel"));
    elemento.insert(make_pair("papel","pedra"));
    elemento.insert(make_pair("pedra","lagarto"));
    elemento.insert(make_pair("lagarto","Spock"));
    elemento.insert(make_pair("Spock","tesoura"));
    elemento.insert(make_pair("tesoura","lagarto"));
    elemento.insert(make_pair("lagarto","papel"));
    elemento.insert(make_pair("papel","Spock"));
    elemento.insert(make_pair("Spock","pedra"));
    elemento.insert(make_pair("pedra","tesoura"));

    cin>>N;
    for(int i=1; i<=N; i++){
        printf("Caso #%d: ",i);
        cin>>dado.first>>dado.second;
        if(dado.first == dado.second) {
            printf("De novo!\n");
        }else{
            it = elemento.find(dado);
            if(it != elemento.end()) printf("Bazinga!\n");
            else printf("Raj trapaceou!\n");
        }
    }

  return 0;
}
