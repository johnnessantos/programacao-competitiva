/**
 * autor: Johnnes Santos 
 * data: 24/01/2020
 * exercicio: 3140
 **/

#include<iostream>
#include<string>

using namespace std;

int main(){
        string str;
        int open_tag, close_tag;

        open_tag = close_tag = -1;
        while(getline(cin,str)){
                if(open_tag == -1){
                        open_tag = str.find("<body>");
                }else{
                        if(close_tag == -1) close_tag = str.find("</body>");
                        if(close_tag == -1) cout<<str<<endl;
                }
        }
        return 0;
}