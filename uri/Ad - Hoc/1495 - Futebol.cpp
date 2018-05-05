#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int gols(int x){
    if(x==0) return 1;
    return x+1;
}

int main (){
    int i,j,N,G,gf,gs,pt;
    int time[100000];

    while (cin>>N>>G){
        pt = 0;
        j = 0;
        for(i=0;i<N;i++){
            cin>>gf>>gs;
            if(gf>gs){
                pt = pt+3;
            }else{
                time[j] = gs-gf; // Always positive
                j++;// Amount of elements in array
            }
        }
        vector <int> Play(time, time+j);
        sort(Play.begin(),Play.end());

        i = 0;
        while (i<j && G>0){
            if (G > Play[i]){
                pt+=3;
                G = G -(Play[i]+1);
            } else {
                if (G == Play[i] && G!=0) pt++;
                G=0;
            }
            i++;
        }
        while(i<j && Play[i]==0){
            pt++;
            i++;
        }
        cout<<pt<<endl;
    }
    return 0;
}
