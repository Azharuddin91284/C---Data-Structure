#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void revStr(string & strg){


int i=strg.length();
while(i>=0){
    cout<<strg[i];
    i--;
}

}

int main(){
    string strg;
    cout<<"Enter the String ";
    cin>>strg;

    revStr(strg);
    return 0;
    
    }