#include<iostream>
using namespace std;
int main (){
    int l, c,x,y,n;

    cin>>n;
    while(n>0){
        cin>>l>>c;
        x = (l-2)/3;
        if ((l-2)%3 != 0) x++;
        y = (c-2)/3;
        if ((c-2)%3 !=0 ) y++;
        cout<<x*y<<endl;
        n--;
    }
    return 0;
}

