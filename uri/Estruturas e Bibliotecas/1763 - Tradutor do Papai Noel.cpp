#include<bits/stdc++.h>
using namespace std;

int main(){
    map <string, string > pais;
    string word;

    pais.insert(make_pair("brasil","Feliz Natal!"));
    pais.insert(make_pair("alemanha","Frohliche Weihnachten!"));
    pais.insert(make_pair("austria","Frohe Weihnacht!"));
    pais.insert(make_pair("coreia","Chuk Sung Tan!"));
    pais.insert(make_pair("espanha","Feliz Navidad!"));
    pais.insert(make_pair("grecia","Kala Christougena!"));
    pais.insert(make_pair("estados-unidos","Merry Christmas!"));
    pais.insert(make_pair("inglaterra","Merry Christmas!"));
    pais.insert(make_pair("australia","Merry Christmas!"));
    pais.insert(make_pair("portugal","Feliz Natal!"));
    pais.insert(make_pair("suecia","God Jul!"));
    pais.insert(make_pair("turquia","Mutlu Noeller"));
    pais.insert(make_pair("argentina","Feliz Navidad!"));
    pais.insert(make_pair("chile","Feliz Navidad!"));
    pais.insert(make_pair("mexico","Feliz Navidad!"));
    pais.insert(make_pair("antardida","Merry Christmas!"));
    pais.insert(make_pair("canada","Merry Christmas!"));
    pais.insert(make_pair("irlanda","Nollaig Shona Dhuit!"));
    pais.insert(make_pair("belgica","Zalig Kerstfeest!"));
    pais.insert(make_pair("italia","Buon Natale!"));
    pais.insert(make_pair("libia","Buon Natale!"));
    pais.insert(make_pair("siria","Milad Mubarak!"));
    pais.insert(make_pair("marrocos","Milad Mubarak!"));
    pais.insert(make_pair("japao","Merii Kurisumasu!"));

    while(cin>>word){

        if(pais.find(word)==pais.end()){
            printf("--- NOT FOUND ---\n");
        }else{
            printf("%s\n",pais[word].data());
        }
    }
    return 0;
}
