#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i,c;
    char sentence[51];
    bool maiscula = true;
    while(cin.getline(sentence,51)){
        maiscula = true;
        c=strlen(sentence);
        for(i=0;i<c;i++){
            if(sentence[i]!= ' '){
                if(maiscula){
                    sentence[i]=toupper(sentence[i]);
                    maiscula = false;
                }else{
                    sentence[i]=tolower(sentence[i]);
                    maiscula = true;

                }
            }
        }
        cout<<sentence<<endl;
    }
    return 0;
}
