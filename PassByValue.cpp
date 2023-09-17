//pass by value means dummyy method value cN BE CHANGED otherwise main method vlue CAN'T be changed so seprated memory space is created for each varisvble in pass by value hank you

#include<iostream>
using namespace std;
void dummy(int n){
    n=n+4;
    cout<<"Value of n equal =  "<<n;
    cout<<endl;
    
}


int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
   //n=n+3;

    dummy(n);
    cout<<"Value of n = "<<n;

}