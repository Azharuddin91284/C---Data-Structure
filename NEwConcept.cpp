// given number=234 find product of each didgit and sum of each digit then find product - sum 
//Example prod=2*3*4=24 , sum=2+3+4=9, number=prod - sum = 24-9=15 completed.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number."<<endl;
    cin>>n;
    int digit;
    int prod=1;
    int sum=0;

    while(n!=0){
        digit=n%10;
        prod=prod*digit;
        sum=sum+digit;
        n=n/10;

    }
   
    int number=prod-sum;
    cout<<number<<endl;
}