#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n,h,v,t,i,j;
    int money,maior,pos,s;

    while(cin>>n>>h){
        priority_queue <int> tarefa[h+1];
        money =0;
        for(i=1;i<=n;i++){
            cin>>v>>t;
            money = money + v;
            tarefa[t].push(v);
        }

        for(i=h;i>=1;i--){
            maior = 0;
            pos = 0;

            for(j=h;j>=i;j--){
                if(!tarefa[j].empty() && tarefa[j].top() > maior){
                    maior = tarefa[j].top();
                    pos = j;
                }
            }
            if(pos>0){
                money=money - maior;
                tarefa[pos].pop();
            }
        }
        cout<<money<<endl;
    }

    return 0;
}
