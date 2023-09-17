#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<i;
        }cout<<endl;
    }
    cout<<endl;


    int m;
    cout<<"Enter the value:"<<endl;
    cin>>m;
    for(int i=m;i>=1;i--){
        for(int j=1;j<=i;j++){
           cout<<i;
        }cout<<endl;
    }

     int a;
    cout<<"Enter the value:"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
           cout<<(i-j+1);
        }cout<<endl;
    }


     int b;
    cout<<"Enter the value:"<<endl;
    cin>>b;
    int value=1;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
           cout<<value<<" ";
           value=value+1;
        }cout<<endl;
    }

    
     int c;
    cout<<"Enter the value:"<<endl;
    cin>>c;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
           cout<<(2*(i)+j-1)<<" ";
        }cout<<endl;
    }




}