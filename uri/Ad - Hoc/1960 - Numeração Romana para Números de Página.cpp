#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack< pair<int,char> > num;
    num.push(make_pair(1,'I'));
    num.push(make_pair(5,'V'));
    num.push(make_pair(10,'X'));
    num.push(make_pair(50,'L'));
    num.push(make_pair(100,'C'));
    num.push(make_pair(500,'D'));

    int N;
    string romano = "";
    cin>>N;

    while(N>0){
        if(N>=num.top().first){
            romano = romano + num.top().second;
            N = N - num.top().first;
        }else{
            num.pop();
        }
    }
    cout<<romano<<endl;

    return 0;
}
