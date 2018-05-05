#include<iostream>
#include<stack>
using namespace std;

int main(){
    int i,n,k;
    stack <char> teste;
    string c;

    while(cin>>c){
        k = c.size();
        for(i=0;i<k;i++){
            if(c[i]=='('){
                teste.push('(');
            }else{
                if(c[i]==')'){
                    if(!teste.empty()){
                        if(teste.top()=='(') teste.pop();
                    }else {
                        teste.push('$');
                    }
                }
            }
        }

        if(teste.size()==0) cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
        while(!teste.empty()) teste.pop();
    }
    return 0;
}
