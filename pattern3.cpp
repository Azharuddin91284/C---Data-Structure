#include<iostream>
using namespace std;
int main(){

     int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space<=n){
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i){

        int star=n-i+1;
        while(star<=n){
            cout<<"*";
            star=star-1;
            break;
        }
        j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
