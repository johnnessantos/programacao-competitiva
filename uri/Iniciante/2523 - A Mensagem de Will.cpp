#include <iostream>
 
using namespace std;
 
int main() {
    int N, l;
    string alfabet, message;
    
    while(cin>>alfabet){
        cin>>N;

        message = "";
        for(int i=0; i<N; i++) {
            cin>>l;
            message += alfabet[l-1];
        }
        cout<<message<<endl;
    }
    return 0;
}