#include<iostream>
using namespace std;

int fator(int i,int N){    // Funcao que encontra o valor de P
    if(N%i == 0){
        return i;
    }else{
        return fator(i+2,N);    // Como sao valores sao primos impares calculo apenas com os valores impares.
    }
}

int totiente(int N){    // Funcao responsavel por calcular o totiente
    int P = fator(3,N);   // Inicio do 3 pra encontrar 3 pois (15<=N).
    int Q = N/P;            // se N = PQ e sabendo P temos que Q = N/P.
    return (P-1)*(Q-1);
}

int fnFindD(int iNum1,int iNum2){
    int a1,a2,a3,b1,b2,b3,t1,t2,t3,q;
    a1=1;
    a2=0;
    a3=iNum1;
    b1=0;
    b2=1;
    b3=iNum2;
    while(b3!=1) {
        q=a3/b3;
        t1=a1-(q*b1);
        t2=a2-(q*b2);
        t3=a3-(q*b3);
        a1=b1;
        a2=b2;
        a3=b3;
        b1=t1;
        b2=t2;
        b3=t3;
    }

    if(b2<0)b2=b2+iNum1;
    return b2;
}

int Descrypt(int N, int E, int C){
    unsigned long long int m = 1;
    unsigned long long int p = C;
    int d = fnFindD(totiente(N),E);
    while( d > 0 ){
        if( d%2==1 ) m = m*p % N;
        p = (p*p)%N;
        d = (d >> 1);
    }
    return m;
}

int main(){
    int N,E,C;
    while(cin>>N>>E>>C){
        cout<<Descrypt(N,E,C)<<endl;
    }
    return 0;
}
