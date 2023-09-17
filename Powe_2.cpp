// checking given integer is the form of 2**i where i=0,1,2,3,4
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number."<<endl;
    cin>>n;
    int ans=1;
    //int INT_MAX;
    for(int i=0;i<=30;i++){
        //ans=pow(2,i);     // in case of ans=ans*2 i can use here ans=pow(2, i) inbuilt function
        
       // if(ans < INT_MAX/2)  //   this is a Exception case for solving the Leetcode problem
        //{
            ans=ans*2;
       // }
        if(ans == n){
            cout<<"True"<<endl;
        }
        
        
    }
    
   
}