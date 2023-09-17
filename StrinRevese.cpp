#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string strg;
    cout<<"Enter Your string which you want to reverse"<<endl;
    cin>>strg;

    reverse(strg.begin(),strg.end());
    cout<<"Your reverse strgin = "<<strg<<endl;
    return 0;
}
