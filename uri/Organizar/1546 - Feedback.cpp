#include<iostream>
using namespace std;

int main(){
    int n,k,f;
    cin>>n;
    while(n>0){
        cin>>k;
        while(k>0){
            cin>>f;
            switch(f){
                case 1:
                    cout<<"Rolien"<<endl;
                    break;
                case 2:
                    cout<<"Naej"<<endl;
                    break;
                case 3:
                    cout<<"Elehcim"<<endl;
                    break;
                case 4:
                    cout<<"Odranoel"<<endl;
                    break;
            }
            k--;
        }
        n--;
    }
    return 0;
}
