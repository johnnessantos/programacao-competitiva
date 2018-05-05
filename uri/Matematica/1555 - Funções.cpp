#include<iostream>
#include<cmath>
using namespace std;

int rafael(int x, int y){
    return (int)pow((3*x),2) + pow(y,2);
}

int beto(int x,int y){
    return (int) 2*(x*x) + pow((5*y),2);
}

int carlos(int x, int y){
    return (int)(-100*x + pow(y,3));
}

int main(){

    int x, y,n;
    int r,b,c;
    cin>>n;
    while(n>0){
        cin>>x>>y;
        r=rafael(x,y);
        b=beto(x,y);
        c=carlos(x,y);
        if(r > b && r > c){
            cout<<"Rafael ganhou"<<endl;
        }else{
            if(b > r && b > c){
                cout<<"Beto ganhou"<<endl;
            }else{
                cout<<"Carlos ganhou"<<endl;
            }
        }
        n--;
    }
    return 0;
}
