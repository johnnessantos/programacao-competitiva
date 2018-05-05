#include<iostream>
#include<queue>
#include<fstream>
using namespace std;

int contDivisor(int n){
    int i,c=1; // c e o contador de divisores de n
    for(i=2;i<=n;i++){
        if(n%i==0) c++;
    }
    return c;
}

/**
    metodo para encontrar o numero de divisores de um numero basta fatora-lo
    ex : 12/2  assim 12 = 2^2*3, entao o numero de divisores e o expoente +1 multiplicado
         6/2    (2+1)*(1+1) = 6 divisores
         3/3
         1
*/

int main(){

    int i,n=1,c;
    queue <int> portas; //Fila para printar os elementos
    ifstream in("entrada.txt");

    while(n!=0){
        cin>>n;
        if(n==0) return 0; // n = 0 encerra o algoritmo
        for(i=1;i<=n;i++){
            if(contDivisor(i)%2 == 1) portas.push(i); //enfileira os elementos que tem a quantidade de divisores par
        }
        ///Trecho de codigo para printar os elementos
        c = portas.size();
        for(i=1;i<c;i++){ //printo ate o penultimo elemento porque tenho que printar o ultimo com quebra
             cout<<portas.front()<<" "; // Busca na fila o primeiro elemento
             portas.pop(); //Desenfileiro o elemento para nao printa-lo novamente
        }
        cout<<portas.back()<<endl;
        portas.pop(); // Fila vazia
    }

    return 0;
}
