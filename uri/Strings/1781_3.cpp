#include<iostream>
#include<time.h>

using namespace std;

const int C = 0;
const int V = 1;

int main (){
    //The solution this problem will realized trough of concepts of list circular
    int T,i,j,k,op,type,jump;
    string vg = "aeiou";
    string S,vogal,cons;
    int pVogal, pCons, auxV, auxC, sizeV, sizeC;

    cin>>T;
    for (int caso=1;caso<=T;caso++){
        vogal = "";
        cons = "";
        cin>>S;
        int Pos[S.size()];
        /// Separated the letters
        for (i=0;i<S.size(); i++){
            j = 0;
            while ( j<6 && S[i]!=vg[j]) j++;
            if (j<6){
                vogal = vogal + S[i];
                Pos[i] = V;
            } else{
                cons = cons + S[i];
                Pos[i] = C;
            }
        }
        pVogal = 0;
        pCons = 0;
        sizeV = vogal.size();
        sizeC = cons.size();

        cin>>op;
        cout<<"Caso #"<<caso<<":"<<endl;
        for (j = 0; j<op; j++) {
            cin>>type;
            switch(type){
                case 0:
                    cin>>jump;
                    pVogal = (pVogal - (jump%sizeV) + sizeV)%sizeV;
                    break;
                case 1:
                    cin>>jump;
                    pCons = (pCons - (jump%sizeC) + sizeC)%sizeC;
                    break;
                case 2:
                    auxV = pVogal;
                    auxC = pCons;
                    for (k=0; k<S.size(); k++){
                        if (Pos[k] == V){
                            cout<<vogal[auxV];
                            auxV = (auxV + 1)%sizeV;
                        }else{
                            cout<<cons[auxC];
                            auxC = (auxC+1)%sizeC;
                        }
                    }
                    cout<<endl;
                    break;
            }
        }
    }
    return 0;
}
