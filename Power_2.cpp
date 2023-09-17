// checking given integer is the form of 2**i where i=0,1,2,3,4
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number."<<endl;
    cin>>n;
    int ans;
    for(int i=0;i<=30;i++){
        ans=pow(2,i);
        if(ans == n){
            cout<<"True"<<endl;
        }
        
        
    }
   /* if(ans != n){
            cout<<"False"<<endl;
        } */
    
   
}