#include<iostream>
#include<stack>
#include<set>
using namespace std;

int main(){
    int n,t,x,c,elem;
    set <int> quadP;

    cin>>t;
    for(int i=1; i<=50; i++) quadP.insert(i*i);
    while(t){
        cin>>n;
        stack <int> haste[n];
        elem = 1;
        x = 0;
        c = 0;
        while(x!=n){
            if(!haste[x].empty()){
                if(quadP.find(haste[x].top()+elem)!=quadP.end()){
                    haste[x].push(elem);
                    x = 0;
                    elem++;
                    c++;
                }else{
                    x++;
                }
            }else{
                haste[x].push(elem);
                elem++;
                c++;
                x = 0;
            }
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}
