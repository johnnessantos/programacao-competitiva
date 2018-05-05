#include<bits/stdc++.h>
using namespace std;
const int ZERO = (int)'0';
int main(){
    int n, c, t;
    string numb;

    cin>>n;
    while(n){
        cin>>numb;
        c = 0;
        while(count(numb.begin(), numb.end(),'0')!=numb.size()){
            t = numb[numb.size()-1] - ZERO;
            if(t%2==1) c++;

            for(int i=numb.size()-1; i>0; i--){
                t = (((int)numb[i-1]-ZERO)*10 + (int)numb[i]-ZERO)/2;
                numb[i] = (char)(t%10+ZERO);
            }
            t = ((int)numb[0]-ZERO)/2;
            numb[0] = (char)(t+ZERO);
        }
        printf("%d\n", c);
        n--;
    }

    return 0;
}

