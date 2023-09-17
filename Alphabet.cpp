#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    cout<<"Print all the Alphabets from A-Z:"<<endl;

    for(int i=65;i<=90;i++){
        cout<<(char) i<<" ";
    }
    cout<<endl;

    cout<<"Print all the alphabets from a-z:"<<endl;
    for(int i=97;i<=122;i++){
        cout<<(char)i<<" ";
    }
    return 0;

}