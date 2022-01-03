#include<bits/stdc++.h>

using namespace std;


const int MAX_CATEGORIES = 10;

int main(){
    int n, category;
    int counter[MAX_CATEGORIES];
    string toy;
    string categories[MAX_CATEGORIES] = {"Brinquedos", "Alimentos", "Roupas", "Calcados", "Eletronicos", "Livros", "Gadgets", "Smartphones", "Jogos", "Papelaria"};

    for(int i=0; i<MAX_CATEGORIES; i++) counter[i]=0;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>toy>>category;
        counter[category-1]++;
    }

    for(int i=0; i<MAX_CATEGORIES; i++){
        cout<<"Total de "<<categories[i]<<": "<<counter[i]<<endl;
    }


    return 0;
}