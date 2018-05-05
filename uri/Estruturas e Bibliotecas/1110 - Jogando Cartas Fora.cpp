#include<iostream>
#include<queue>
using namespace std;

int main (){

    queue <int> cartas;
    int i,c,n;
    while (cin>>n && n!=0){
        for (i=1;i<=n;i++) cartas.push(i); // Building the structure
        cout<<"Discarded cards: ";
        c = 0;
        while (cartas.size() > 2){
            cout<<cartas.front()<<", ";
            cartas.pop(); // Removing the first element of queue
            cartas.push(cartas.front()); // Inserting the second element at the end of the queue
            cartas.pop(); // Removing it now
        }
        cout<<cartas.front()<<endl; // When has only two elements show the top
        cartas.pop();
        cout<<"Remaining card: "<<cartas.front()<<endl;
        cartas.pop();
    }
    return 0;
}
