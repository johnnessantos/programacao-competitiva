#include<bits/stdc++.h>

using namespace std;

const long long int MAX_R = sqrt(pow(10, 8))+1;

int main() {
    long long int perfect_squares[MAX_R+1];
    long long int Q, L, R;

    for(int i=0; i<=MAX_R; i++) perfect_squares[i] = i*i;
    cin>>Q;
    for(int i=0; i < Q; i++){
        cin>>L>>R;
        long long int pos_L, pos_R, s;

        pos_L = pos_R = 0;

        while(perfect_squares[pos_L] < L) pos_L++;
        while(perfect_squares[pos_R] < R) pos_R++;

        s=0;

        while(pos_L <= pos_R) {
            if(perfect_squares[pos_L] >= L && perfect_squares[pos_L] <= R) s++;
            pos_L++;
        }

        cout<<s<<endl;
    }

    return 0;
}