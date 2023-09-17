#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value:"<<endl;
    cin>>n;

    int m=1;
    while(m<=n){
        int j=1;
        while(j<=m){
            char ch='A'+(m - 1);
            cout<<ch;
            j=j+1;
        }cout<<endl;
        m=m+1;
    }cout<<endl;

     int a;
    cout<<"Enter the Value:"<<endl;
    cin>>a;

    int k=1;
    while(k<=a){
        int j=1;
        while(j<=a){
            char ch='A'+(k - 1);
            cout<<ch;
            j=j+1;
        }cout<<endl;
        k=k+1;
    }cout<<endl;


     int b;
    cout<<"Enter the Value:"<<endl;
    cin>>b;

    int f=1;
    while(f<=b){
        int j=1;
        while(j<=b){
            char ch='A'+(j - 1);
            cout<<ch;
            j=j+1;
        }cout<<endl;
        f=f+1;
    }

    cout<<endl;

     int c;
    cout<<"Enter the Value:"<<endl;
    cin>>c;

    int h=1;
    while(h<=c){
        int j=1;
        while(j<=h){
            char ch='A'+(j - 1);
            cout<<ch;
            j=j+1;
        }cout<<endl;
        h=h+1;
    }

    cout<<endl;

     int l;
    cout<<"Enter the Value:"<<endl;
    cin>>l;

    int s=1;
    while(s<=l){
        int j=1;
        while(j<=l){
            char ch='A'+s+j-2;
            cout<<ch;
            j=j+1;
        }cout<<endl;
        s=s+1;
    }
}