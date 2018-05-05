#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

string toChar(int i){
    string str = "";
    char c;
    if(i<10){
        str = (char)(48+i);
    }else{
        str  = (char)(48 + (i/10));
        str = str + (char)(48 + (i%10));
    }
    return str;
}
int main(){
/*
    string path = "";
    vector < pair<long long int,long long int> > entrada;
    vector < pair<long long int,long long int> > saida;
    long long int xi,yi,xs,ys;

    for(int i = 1; i<=53; i++){
        path = "E\\E_"+toChar(i)+".in";
        ifstream in(path.data());
        path = "E\\E_"+toChar(i)+".sol";
        ifstream out(path.data());
        in>>xi>>yi;
        out>>xs>>ys;
        entrada.push_back(make_pair(xi,yi));
        saida.push_back(make_pair(xs,ys));
    }

    ofstream entradas("1935.in");
    ofstream saidas("1935.out");

    for(int i=0; i<53; i++){
        entradas<<entrada[i].first<<" "<<entrada[i].second<<endl;
        saidas<<saida[i].first<<" "<<saida[i].second<<endl;
    }
*/

    vector < pair<int,int> > entrada;
    vector < pair<int,int> > saida;
    ifstream in("1935.out");
    ifstream sol("1935.sol");
    long long int xi,yi,xs,ys;

    for(int i=0; i<53; i++){
        in>>xi>>yi;
        sol>>xs>>ys;
        entrada.push_back(make_pair(xi,yi));
        saida.push_back(make_pair(xs,ys));
    }
    for(int i=0; i<53; i++){
        if(entrada[i].first == saida[i].first && entrada[i].second == saida[i].second) cout<<i+1<<" certo"<<endl;
        else cout<<i+1<<" errado"<<endl;
    }

    return 0;
}
