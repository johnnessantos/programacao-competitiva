#include<iostream>
#include<queue>
#include<fstream>
using namespace std;

int main(){

    queue <char> diamond; //queue for imitation of balancing parentheses
    string mina; // string to read
    int N,i,tam,contador;

    cin>>N;
    while(N>0){
        cin>>mina; //read
        contador=0; //counter
        tam = mina.size(); // size of string
        for(i=0;i<tam;i++){
            if(mina[i]=='<'){
                diamond.push('<'); // stacking if <
            }else{
                if(!diamond.empty() && mina[i]=='>'){
                    diamond.pop();
                    contador++;
                }
            }
        }
        cout<<contador<<endl;
        while(!diamond.empty()) diamond.pop(); //Emptying the queue
        N--;
    }

    return 0;
}
