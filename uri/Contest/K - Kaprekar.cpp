#include<iostream>
using namespace std;

void Inserction(int n, int vetor[]){
   int j,i,key;
   for(j = 1; j < n; j++){
      key = vetor[j];
      i = j - 1;
      while(i >= 0 && vetor[i] > key){
         vetor[i + 1] = vetor[i];
         i = i - 1;
      }
      vetor[i + 1] = key;
   }
}

int maiorNumero(int x){
    if(x==0) {
        return 0;
    }else{
        int v[4];
        v[0] = x%10; x=x/10;
        v[1] = x%10; x=x/10;
        v[2] = x%10; x=x/10;
        v[3] = x%10; x=x/10;
        Inserction(4,v);
        return 1000*v[3] + 100*v[2] + 10*v[1] + v[0];
    }
}

int menorNumero(int x){
    if(x == 0 ){
        return 0;
    }else{
        int v[4];
        v[0] = x%10; x=x/10;
        v[1] = x%10; x=x/10;
        v[2] = x%10; x=x/10;
        v[3] = x%10; x=x/10;
        Inserction(4,v);
        return 1000*v[0] + 100*v[1] + 10*v[2] + v[3];
    }
}

int krapekar(int X) {
   int cnt = 0;
   while (X != 6174) {
       int maior = maiorNumero(X);
       int menor = menorNumero(X);
       X = maior - menor;
       if(X==0) return -1;
       cnt = cnt + 1;
   }
   return cnt;
}

int main(){
    int t,caso=1,x;
    cin>>t;
    while(t>0){
        cin>>x;
        cout<<"Caso #"<<caso<<": "<<krapekar(x)<<endl;
        caso++;
        t--;
    }
    return 0;
}
