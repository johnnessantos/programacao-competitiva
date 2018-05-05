#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
using namespace std;

int lestring(char s[], int max) {
    int i = 0;
    char letra;
    for (i = 0; i < (max - 1); i++) {
        letra = fgetc(stdin);
        if ((letra == '\n') && (i == 0)) {
            i = i - 1;
            continue;
   }
   if (letra == '\n')
       break;
   s[i] = letra;
    }
    s[i] = 0;
    return (i);
}

int main(){
    char sentence[10];

    int c,i;
    //while(cin>>sentence){
    c=lestring(sentence,10);
        /*for(i=0;i<c;i++){
            if(i%2==0){
                sentence[i]=toupper(sentence[i]);
            }else{
                sentence[i]=tolower(sentence[i]);
            }
        }*/
    //}
    cout<<sentence<<endl;
    return 0;
}
