#include<iostream>
#include<cstring>

using namespace std;

char  prox(char c){
    if(c=='z'){
        return 'a';
    }else{
        return c+1;
    }
}

int main(){
    char A[10001],B[10001];
    char aux;
    int n,c,i;
    cin>>n;
    while(n>0){
        c=0;
        cin>>A>>B;
        for(i=0;i<strlen(A);i++){
            if(A[i]!=B[i]){
                aux=A[i];
                while(aux!=B[i]){
                   c++;
                   aux = prox(aux);
                }
            }
        }
        cout<<c<<endl;
        n--;
    }
    return 0;
}
