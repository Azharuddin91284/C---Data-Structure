#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i+1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }

    cout<<endl;
     int m;
    cout<<"Enter the number:"<<endl;
    cin>>m;
    int row=1;
    while(row<=m){
        int star=n-row+1;
        while(star){
            cout<<"*";
            star=star-1;
        }
 
        int j=1;
        while(j<=row){
            cout<<" ";
            j=j+1;
        }cout<<endl;
        row=row+1;
    }

   
}