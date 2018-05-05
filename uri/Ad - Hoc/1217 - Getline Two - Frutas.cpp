#include<iostream>
#include<sstream>
#include<iomanip>
#include<cstdio>
using namespace std;

int main (){

    double x,media;
    int qtd, cases;
    char fruits[10001];
    string f;
    int c,i;
    float v , s;

    scanf("%d ",&cases);
    s = 0;
    qtd = 0;
    for(i=1;i<=cases;i++){
        c=0;
        scanf("%f ",&v);
        s += v;
        scanf("%[^\n]%*c ",fruits);
        istringstream iss(fruits);
        while (iss>>f)c++;
        qtd+=c;
        cout<<"day "<<i<<": "<<c<<" kg"<<endl;
    }
    cout<<fixed<<setprecision(2)<<(float)qtd/cases<<" kg by day"<<endl;
    cout<<"R$ "<<fixed<<setprecision(2)<<s/cases<<" by day"<<endl;
    return 0;
}
