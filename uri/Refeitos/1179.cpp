#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int i,t,n,p,caso;
    int maior,atual, ant;
    int v[100000];

    cin>>t;
    for(caso=1;caso<=t;caso++){
        cin>>n;
        atual = 0;
        ant = 0;
        cin>>v[0];
        maior = 0;
        for(i=1;i<n;i++){
            cin>>v[i];
            if(v[i]>v[maior]) maior=i;
        }
        i=maior;
        while(v[maior]==v[i]){
            atual++;
            i++;
        }
        for(i=i;i<n;i++){
            if(v[maior] == v[i]){
                if(ant<atual){
                    ant++;
                }else{
                    atual++;
                    ant++;
                }
            }else{
                ant=0;
            }
        }
        cout<<"Caso #"<<caso<<": "<<atual<<endl;
    }
    return 0;
}
