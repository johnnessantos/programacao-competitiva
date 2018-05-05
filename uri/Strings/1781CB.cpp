#include<iostream>
#include<cstring>
using namespace std;

int main (){
    int tam,i,j,caso,T,op,type,jump,ini;
    char S[10001];
    int tv,jv,PosV[10000];
    int tc,jc,PosC[10000];
    string vogal, cons,aux;
    string vg = "aeiou";

    cin>>T;
    for (int caso=1;caso<=T;caso++){
        vogal = "";
        cons = "";
        tv=0;
        tc=0;
        jc=0;
        jv=0;
        cin>>S;
        tam = strlen(S);
        /// Separated the letters
        for (i=0;i<tam; i++){
            j = 0;
            while ( j<6 && S[i]!=vg[j]) j++;
            if (j<6){
                vogal = vogal + S[i];
                PosV[tv] = i;
                tv++;
            } else{
                cons = cons + S[i];
                PosC[tc] = i;
                tc++;
            }
        }
        cin>>op;
        cout<<"Caso #"<<caso<<":"<<endl;
        for (j = 0; j<op; j++) {
            cin>>type;
            switch(type){
                    case 0:
                        cin>>jump;
                        jv = jv-jump;
                        break;
                    case 1:
                        cin>>jump;
                        jc = jc-jump;
                        break;
                    case 2:
                        if (jv!=0 && tv>0){
                            ini = tv+(jv%tv);
                            for (int k = 0;k<tv;k++) S[PosV[k]] = vogal[(ini+k)%tv];
                        }

                        if (jc!=0 && tc>0){
                            ini = tc+(jc%tc);
                            for (int k = 0; k<tc; k++) S[PosC[k]] = cons[(ini+k)%tc];
                        }

                        cout<<S<<endl;
                        break;
                }
        }
    }

    return 0;
}
