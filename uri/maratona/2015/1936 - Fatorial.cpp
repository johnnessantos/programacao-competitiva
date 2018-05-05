#include<iostream>
using namespace std;

int fatorial(int f){
    if(f<=1) return 1;
    else return f*fatorial(f-1);
}

int proxFatorial(int f){
    int i = 1;
    while(fatorial(i)<=f) i++; //sai do loop quando o fatorial for maior que numero ou igual
    return fatorial(i-1);   //retorna o maior valor possivel para a composicao de soma de fatoriais
}

int main(){
    int f,c=0;

    cin>>f;
    while(f){
        f = f - proxFatorial(f);
        c++;
    }
    cout<<c<<endl;
    return 0;
}
