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

int D(int N, int E){        // Calcula a chave pra descriptografar a mensagem
    int tot;
    unsigned long long int c=1;       //Devo utilizar (unsigned long long) pois a condicao do while pode estourar o int.
    tot = totiente(N);
    while(c*E%tot != 1){    //DE = 1 (mod totiente(N)) para Calcular D utilizo a variavel c.
        c++;
    }
    return c;
}

int mensagem(int N, int E, int C){   //Descriptografar a mensagem
    int i;
    unsigned long long int m=1;
    int d = D(N,E);
    for(i=0;i<d;i++){    // M = Cd (mod n) definitivamente usar isso estoura  qualquer
        m = m*C % N;     //   tipo de inteiro para valores altos. Entao calculo 1 a 1.
    }
    return m;
}

int main(){
    int N,E,C;
    while (cin>>N>>E>>C){
        cout<<mensagem(N,E,C)<<endl;
    }
    return 0;
}
