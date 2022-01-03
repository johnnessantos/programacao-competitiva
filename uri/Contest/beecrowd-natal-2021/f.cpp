#include<bits/stdc++.h>

using namespace std;

bool validaCpf(string cpf){
    unsigned lenght = cpf.size();
    int ver1 = 0, ver2 = 0;
    char aux;

    if (lenght != 11) return false;

    for (int j=0; j<9; j++){
        aux = cpf[j];
        ver1 += atoi(&aux)*(j+1);
    }

    ver1 %= 11;

    for (int j=0; j<9; j++){
        aux = cpf[j];
        ver2 += atoi(&aux)*j;
    }

    ver2 += ver1*9;
    ver2 %= 11;

    aux = cpf[lenght-2];
    if (atoi(&aux) == ver1){
        aux = cpf[lenght-1];
        if ( atoi(&aux) == ver2)
            return true;
    }
    return false;
}

int main() {
    int N;
    string cpf;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>cpf;
        cpf = regex_replace(cpf, regex("-"), "");
        if(validaCpf(cpf)) cout<<"HoHoHoHo!"<<endl;
        else cout<<"Muahahaha!"<<endl;
    }
}