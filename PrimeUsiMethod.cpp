#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        cout<<endl;
        
        
    }
    return 1;

}

int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

  if( isPrime(n)){
    cout<<" Is a prime  "<<endl;
  }
   else{
    cout<<"Not a prime "<<endl;
   }
}