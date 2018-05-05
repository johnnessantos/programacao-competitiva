#include<bits/stdc++.h>
using namespace std;

int toInt(char c){ return (int)c - (int)'0'; }

int main(){
    string s;
    float media = 0;
    int i=0, c=0;

    cin>>s;
    while(i<s.size()){
        if(toInt(s[i]) == 1){
            if(i<s.size()-1){
                if(toInt(s[i+1])==0) {
                    media = media + toInt(s[i])*10;
                    i = i+2;
                }else{
                    media = media + toInt(s[i]);
                    i++;
                }
            }else{
                media = media + toInt(s[i]);
                i++;
            }
        }else{
            media = media + toInt(s[i]);
            i++;
        }
        c++;
    }

    printf("%.2f\n", media/c);
    return 0;
}
