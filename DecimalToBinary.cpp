#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    int i=1;
    cout<<"Enter the number:";
    cin>>n;
    
    while(n!=0){
        //int bit=n%2;
        int bit=n&1;
        cout<<bit;
        //n=n/2;
        n=n>>1;
        ans=ans+ bit * i;
        i=i * 10;
    }
    cout<<endl;
    cout<<"The binary repregentation of the given number is: "<<ans<<endl;
    

   // int ans=0;
    //int i=0;
    //while(n != 0){

        //int bit = n&1;
             
        
        //n = n >> 1;

        //ans =bit * pow(10,i) + ans;
        //i++;
        
       // cout<<bit;
        

    }
    //cout<<endl;
    //cout<<" Answer is:"<< ans <<endl;
    //cout<<ans<<endl;5
