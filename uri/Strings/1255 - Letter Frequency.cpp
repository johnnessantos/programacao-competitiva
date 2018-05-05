#include<bits/stdc++.h>
using namespace std;

typedef struct no{
    char l;
    int freq;
}tNo;

int eMax(tNo let[]){
    int maxi = 0;
    for(int i=0; i<26; i++){
        if(maxi < let[i].freq) maxi=let[i].freq;
    }
    return maxi;
}

int main(){
    int i,n, maior;
    string s, res;
    tNo let[26];

    for(char f='a',i=0; f<='z'; f++,i++) let[i].l=f;
    cin>>n;
    cin.ignore();
    while(n){
        getline(cin,s);
        for(i=0;i<26; i++) let[i].freq = count(s.begin(), s.end(), let[i].l) + count(s.begin(), s.end(), toupper(let[i].l));
        maior = eMax(let);
        res = "";
        for(i=0; i<26; i++){
            if(let[i].freq==maior) res = res+let[i].l;
        }
        printf("%s\n", res.data());
        n--;
    }

    return 0;
}
