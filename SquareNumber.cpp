// finding power of any given positive  number using method and use power(a,b) method  which takes ans=ans*a(power of which value).

#include<iostream>
using namespace std;
int a,b;
int i;


int power(int a,int i){
    cout<<"Enter the value of a = ";
    cin>>a;
   // cout<<"Enter the value of b = ";
   // cin>>b;
    int ans=1;
    
    for(int i=1;i<=3;i++){  // use i<=2 then it gives square of the any given number
        ans=ans*a;
        //cout<<"Answer = "<<ans<<endl;

    }
    cout<<"Answer = "<<ans<<endl;
    return 0;

}
int main(){
    
   int ans= power(a,i);
   
   return ans;
    
}