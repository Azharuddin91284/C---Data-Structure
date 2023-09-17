// find the number of bits from the given number digit 
// Example, n=5  bit=000101 number of 1 bit=3
// using n&1 which find number of 1 bit and then use increament operator n>>1 it will definetly shift 1 bit then print the code.
// use condition in while loop n!=0;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number."<<endl;
    cin>>n;
    int count=0;

    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;

    }
    cout<<"Number of 1st bit equal = "<<count<<endl;
}