#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int N,vagao,ordem;
    bool epossivel;

    while(cin>>N && N!=0){
        while(cin>>vagao && vagao!=0){
            queue <int> A;
            stack <int> estacao;
            ordem = 1;
            epossivel =  true;
            A.push(vagao);
            for(int i=1; i<N; i++){
                cin>>vagao;
                A.push(vagao);
            }

            while(epossivel && !A.empty()){
                if(A.front() == ordem){
                    A.pop();
                    ordem++;
                }else{
                    if(!estacao.empty()){
                        if(estacao.top() == A.front()){
                            estacao.pop();
                            A.pop();
                        }else{
                            estacao.push(ordem);
                            ordem++;
                            epossivel = (ordem<=N);
                        }
                    }else{
                        estacao.push(ordem);
                        ordem++;
                    }
                }
            }
            if(epossivel)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
