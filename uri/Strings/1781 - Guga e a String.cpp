#include <iostream>
#include <vector>
using namespace std;

int main (){
    int i,j,t,tam,caso,comand,type,jump;
    string guga;

    string vg = "aeiou";
    vector < pair<char , int> > vogal;
    vector < pair <char , int > > cons;
    pair <char , int > letter;

    cin>>t;
    for (caso = 1; caso <=t; caso++){
        cin>>guga;
        int pv[guga.size()];
        int pc[guga.size()];
        for (i=0;i<guga.size(); i++){
            j = 0;
            while ( j<6 && guga[i]!=vg[j]) j++;
            if (j<6){
                pv[vogal.size()] = i;
                letter.first = vg[j];
                letter.second = (vogal.size());
                vogal.push_back(letter);

            } else{
                pc[cons.size()] = i;
                letter.first = guga[i];
                letter.second = (cons.size());
                cons.push_back(letter);
            }
        }

        cin>>comand;
        cout<<"Caso #"<<caso<<":"<<endl;
        for (j=0; j<comand; j++){
            cin>>type;
            switch(type){
                case 0:
                    cin>>jump;
                    tam = vogal.size();
                    for (i=0;i<tam;i++){
                        vogal[i].second = (vogal[i].second + jump)%tam;
                    }
                    break;
                case 1:
                    cin>>jump;
                    tam = cons.size();
                    for (i=0;i<tam;i++){
                        cons[i].second = (cons[i].second + jump)%tam;
                    }
                    break;
                case 2:
                    tam = vogal.size();
                    for (i=0;i<tam;i++){
                        guga[pv[vogal[i].second]] = vogal[i].first;
                    }
                    tam = cons.size();
                    for (i=0;i<tam;i++){
                        guga[pc[cons[i].second]] = cons[i].first;
                    }
                    cout<<guga<<endl;
                    break;
            }
        }
        vogal.clear();
        cons.clear();
    }
    return 0;
}
