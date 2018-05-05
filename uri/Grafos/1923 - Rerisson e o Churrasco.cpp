#include<iostream>
#include<set>
#include<vector>
#include<map>
#include<list>
#include <queue>
#include <algorithm>
using namespace std;

void bfs(int v, int V, list<int> adj[],map <int,string> keysN, int prof){
	queue<int> fila;
	queue <int> profundidades;
	vector <string> lista;
	int contador = 0, cElem = 0;
	bool visitados[V+1]; // vetor de visitados

	for(int i = 0; i < V; i++)visitados[i] = false;
	visitados[v] = true; // marca como visitado

	while(prof > 0 && lista.size() < V ){
		list<int>::iterator it;
		for(it = adj[v].begin(); it != adj[v].end(); it++){
			if(!visitados[*it]){
				lista.push_back(keysN[*it]);
				contador++;
				visitados[*it] = true; // marca como visitado
				fila.push(*it); // insere na fila
			}
		}
		if(!profundidades.empty()){
            if(cElem == profundidades.front()){
                prof--;
                cElem = 0;
                profundidades.pop();
                if(contador>0){
                    profundidades.push(contador);
                    contador = 0;
                }
            }

		}else{
		    profundidades.push(contador);
		    contador = 0;
            prof--;
		}
		if(!fila.empty()){ // verifica se a fila NÃO está vazia
			v = fila.front(); // obtém o primeiro elemento
			fila.pop(); // remove da fila
			cElem++;
		}else{
			break;
		}
	}
	sort(lista.begin(), lista.end());
	cout<<lista.size()<<endl;
	for(int i=0; i<lista.size(); i++) cout<<lista[i]<<endl;
}

int main(){
    int n,g, i=0;
    vector <pair<string , string > > relacoes;
    map <int,string > keysN;
    map <string,int > keysId;
    set <string> pessoas;
    string a,b;

    cin>>n>>g;
    while(n){
        cin>>a>>b;
        relacoes.push_back(make_pair(a,b));
        pessoas.insert(a);
        pessoas.insert(b);
        n--;
    }

    for(set<string> :: iterator it = pessoas.begin(); it != pessoas.end(); it++,i++){
        keysN[i] = (*it);
        keysId[(*it)] = i;
    }
    list <int> adj[pessoas.size()];
    for(int i=0; i<relacoes.size(); i++){
        adj[keysId[relacoes[i].first]].push_back(keysId[relacoes[i].second]);
        adj[keysId[relacoes[i].second]].push_back(keysId[relacoes[i].first]);
    }
    bfs(keysId["Rerisson"], pessoas.size(), adj, keysN,g);

    return 0;
}
