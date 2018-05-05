#include <iostream>
using namespace std;

int toInt(char c){
    return (int) c - '0';
}

int main (){
    string matring[4];

    int i,j,t,v,fat;
    for(i=0;i<4;i++){
        cin>>matring[i];
    }

    t = matring[0].size();
    int decod[t];
    for(i=0;i<t;i++) decod[i]=0;

    fat = 1000;
    for (i=0;i<4;i++){
       for(j=0;j<t;j++){
            decod[j] = decod[j] + toInt(matring[i][j])*fat;
       }
       fat = fat/10;
    }
    for(j=1;j<t-1;j++){
        decod[j] = (decod[0]*decod[j] + decod[t-1]) % 257;
    }
    for(i=1;i<t-1;i++){
       cout<<char(decod[i]);
    }
    cout<<endl;
    return 0;
}
