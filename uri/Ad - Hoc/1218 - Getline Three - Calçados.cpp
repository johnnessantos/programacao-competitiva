#include<iostream>
#include<sstream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main (){

    char calcados[10001];                   //Reserving the size of string
    char word[3];                           // Used char for use the function atoi
    int shoe,f,m,tam,c;
    c = 1;                                  // Count of cases
    while (cin>>shoe){
        m = 0;                              //male
        f = 0;                              //female
        cin.ignore();                       //Use ignore for read the first value of string
        cin.getline(calcados,10001);
        istringstream iss(calcados);        //Separating words with space
        while (iss>>word){
            tam = atoi(word);               // Converting string to integer
            if (tam == shoe){
                iss>>word;
                if (strcmp(word,"M")==0) m++;//Compare if equal male add more 1
                else f++;                    // else female add more 1
            }
        }
        if (c > 1) cout<<endl;
        cout<<"Caso "<<c++<<":"<<endl;
        cout<<"Pares Iguais: "<<f+m<<endl;
        cout<<"F: "<<f<<endl;
        cout<<"M: "<<m<<endl;

    }
    return 0;
}
