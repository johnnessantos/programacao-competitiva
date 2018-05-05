#include<iostream>
#include<cstdlib>
using namespace std;
//Error
struct Tarefa {
    int valor;
    int hor;
};

int otimizacao(Tarefa emp[], int n, int h){ /* Conta quantos trabalhos de horas diferentes*/
    int i,c=0;
    int temp[h+1];
    for(i=1;i<=h;i++) temp[i]=0; // seto como 0 habilitando o horario

    for(i=0;i<n;i++){
        if(temp[(emp[i].hor)]==0){ // Se o horario aparece na lista de tarefas
            c++; // Armazena a quantidade de horas diferentes
            temp[(emp[i].hor)]= 1; // Desabilita o horario.
        }
    }
    return c;
}

int nMaiores(Tarefa emp[] , int n, int h, int total){
    int i,maior,money=0;
    int cnt=otimizacao(emp,n,h); //Se tiver menos taferas do que horas soma tarefas a mais em horas invalidas

    while(cnt>0){
        maior=0;
        for(i=1;i<n;i++){
            if(emp[maior].valor < emp[i].valor){ //Procuro o maior valor entre as tarefas
                maior=i; // Salvo a posicao do maior
            }
        }
        money=money+emp[maior].valor;
        emp[maior].valor=0;
        cnt--;
    }
    return total - money; // Total menos o valor de tarefas que foram possiveis realizar
}

int main(){
    int n,i,h,total;

    while(cin>>n>>h){
        total=0;
        Tarefa emp[n];
        for(i=0;i<n;i++){
            cin>>emp[i].valor>>emp[i].hor;
            total = total + emp[i].valor;  //faco a soma todos os valores de cada tarefa
        }
        cout<<total<<endl;
        cout<<nMaiores(emp,n,h,total)<<endl;
    }

    return 0;
}
