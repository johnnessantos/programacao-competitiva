#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int totiente(int N){ //function totiente
    unsigned int P = 3;
    while(N%P != 0){ // Factor here
        P=P+2;
    }
    int Q = N/P;
    return (P-1)*(Q-1);
}

int  euclidianoEstendido(int a, int b) {
	int x[2] = {1, 0};
	int y[2] = {0, 1};
    int beta,mdc;
	/* Enquanto o resto da divisão de a por b não for zero, eu continuo o algoritmo. */
	while (a % b != 0) {
		int quociente = a / b;

		/* Atualizando os valores de a e b. */
		int temp = a;
		a = b;
		b = temp % b;

		/* Atualizando os valores de x e y. */
		int X = x[0] - (x[1] * quociente);
		int Y = y[0] - (y[1] * quociente);

		x[0] = x[1];
		x[1] = X;
		y[0] = y[1];
		y[1] = Y;
	}

	mdc = b;
	beta = y[1];
	return y[1];
}

int mensagem(int N, int E, int C){ //decoded message
    int i;
    unsigned long long int m=1;
    int d = euclidianoEstendido(E,totiente(N));
    for(i=0;i<d;i++){
        m = m*C % N;
    }

    return m;
}
 /* c1 = 11013 (mod 437)
        = [1105 (mod 437) x 1105 (mod 437) x 1103 (mod 437)] (mod 437)
*/

int main(){
    ifstream in("rsa.txt");  //File input test
    ifstream out("saida.txt"); // File output test
    int N,E,C;
    int s,R;
    while(in>>N>>E>>C){ // This program is working correctly
        out>>s;
        R = mensagem(N,E,C); //Solution
        if(R == s){ // Here I verify if is equal
            cout<<"certo"<<endl;  // Write correct
        }else{
            cout<<"errado"<<endl;  // Write wrong
            cout<<"sol: "<<R<<" tolk: "<<s<<endl;
        }
    }

    return 0;
}
