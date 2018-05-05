#include<iostream>
#include<cstdio>
using namespace std;

typedef struct tP{
    int gp,gc,gca,p;
}tPartida;

int main(){
    tPartida A[2];
    int t1,t2;
    int N;

    cin>>N;
    while(N>0){
        for(int i=0; i<2; i++){
            A[i].gc = 0;
            A[i].gca = 0;
            A[i].gp = 0;
            A[i].p = 0;
        }

        scanf("%d %*c %d",&t1,&t2);
        A[0].gc +=t2;
        A[0].gp +=t1;
        A[1].gc +=t1;
        A[1].gp +=t2;
        A[1].gca = t2;

        if(t1==t2){
            A[0].p++;
            A[1].p++;
        }else{
            if(t1>t2) A[0].p +=3;
            else A[1].p +=3;
        }

        scanf("%d %*c %d",&t2,&t1);
        A[0].gc +=t2;
        A[0].gp +=t1;
        A[1].gc +=t1;
        A[1].gp +=t2;
        A[0].gca = t1;

        if(t1==t2){
            A[0].p++;
            A[1].p++;
        }else{
            if(t1>t2) A[0].p +=3;
            else A[1].p +=3;
        }

        if(A[0].p > A[1].p){
            cout<<"Time 1"<<endl;
        }else{
            if(A[0].p < A[1].p){
                cout<<"Time 2"<<endl;
            }else{
                t1 = A[0].gp - A[0].gc;
                t2 = A[1].gp - A[1].gc;
                if(t1==t2){
                    if(A[0].gca == A[1].gca){
                        cout<<"Penaltis"<<endl;
                    }else{
                        if(A[0].gca > A[1].gca) cout<<"Time 1"<<endl;
                        else cout<<"Time 2"<<endl;
                    }
                }else{
                    if(t1>t2)cout<<"Time 1"<<endl;
                    else cout<<"Time 2"<<endl;
                }
            }
        }
        N--;
    }
    return 0;
}
