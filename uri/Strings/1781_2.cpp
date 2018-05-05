#include<iostream>
#include<list>
using namespace std;

const int C = 0;
const int V = 1;

int main (){

    int T,i,j,op,type,jump;
    string vg = "aeiou";
    string S;
    list <char> vogal;
    list <char> cons;
    list <char> :: iterator itV;
    list <char> :: iterator itC;

    int sizeVogal, sizeCons;
    char letter;

    cin>>T;
    for (int caso=1;caso<=T;caso++){
        cin>>S;
        int Pos[S.size()];
        /// Separated the letters
        for (i=0;i<S.size(); i++){
            j = 0;
            while ( j<6 && S[i]!=vg[j]) j++;
            if (j<6){
                vogal.push_back(S[i]);
                Pos[i] = V;
            } else{
                cons.push_back(S[i]);
                Pos[i] = C;
            }
        }
        sizeVogal = vogal.size();
        sizeCons = cons.size();
        cin>>op;
        cout<<"Caso #"<<caso<<":"<<endl;
        for (int j = 0; j<op; j++) {
            cin>>type;
            switch(type){
                case 0:
                    cin>>jump;
                    jump  = jump%sizeVogal;
                    if (jump > sizeVogal/2) {
                        for (i=0; i<(sizeVogal-jump);i++){
                            letter = vogal.back();
                            vogal.pop_back();
                            vogal.push_front(letter);
                        }
                    } else {
                        for (i=0; i<jump;i++){
                            letter = vogal.front();
                            vogal.pop_front();
                            vogal.push_back(letter);
                        }
                    }
                    break;
                case 1:
                    cin>>jump;
                    jump  = jump%sizeCons;
                    if (jump > sizeCons/2) {
                        for (i=0; i<(sizeCons-jump);i++){
                            letter = cons.back();
                            cons.pop_back();
                            cons.push_front(letter);
                        }
                    } else {
                        for (i=0; i<jump;i++){
                            letter = cons.front();
                            cons.pop_front();
                            cons.push_back(letter);
                        }
                    }
                    break;
                case 2:
                    itV = vogal.begin();
                    itC = cons.begin();
                    for (int k = 0; k < S.size(); k++){
                        if (Pos[k]==C){
                            cout<<*itC;
                            itC++;
                        }else{
                            cout<<*itV;
                            itV++;
                        }
                    }
                    cout<<endl;
                    break;
            }
        }
        vogal.clear();
        cons.clear();
    }
    return 0;
}
