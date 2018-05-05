#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int D,VF,VG;
    double t1,t2,distancia;

    while(cin>>D>>VF>>VG) {
        distancia = (double)D*D + 144;
        distancia = sqrt(distancia);
        t1 = 12.0 / VF;
        t2 = (double)(distancia/VG);
        if(t1>=t2)cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
