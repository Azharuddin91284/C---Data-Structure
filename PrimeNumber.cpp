//for prime 1 2 3 4 5 6 7 8 9 10 ,, "n % 2 to 9 ==0 is not a prime number" else " n is prime number that's the concept". thank you

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for checking prime number or not:"<<endl;
    cin>>n;
    bool isPrime=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
       isPrime=0;
       break;
        }
    }
    if(isPrime==0){
        cout<<"Not a prime number:"<<endl;
    }
    else{
        cout<<"Is a prime number."<<endl;
    }
}