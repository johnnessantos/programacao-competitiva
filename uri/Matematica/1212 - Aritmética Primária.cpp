#include<iostream>
using namespace std;

int main (){

    int carry; // Count of carry
    int i,j,number1, number2; //Numbers for operation
    int v[9], x[9]; // Digits to do calculation

    while (cin>>number1>>number2 && (number1!=0 || number2!=0)){
        carry = 0;
        i = 0;
        while (number1!=0 || number2!=0){ // Adding the digits in vector
            v[i]=number1%10;
            x[i]=number2%10;
            number1/=10;number2/=10;
            i++;
        }
        for(j=0;j<i;j++) {
            if (v[j]+x[j]>=10){ // if the value of sum more than 10 is carry
                carry++;
                v[j+1]++;
            }
        }
        if (carry == 0){
            cout<<"No carry operation."<<endl;
        } else {
            if (carry == 1) cout<<carry<<" carry operation."<<endl;
            else cout<<carry<<" carry operations."<<endl;
        }
    }
    return 0;
}
