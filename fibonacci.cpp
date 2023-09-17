//fibonacci series 0 1 1 2 3 5 8 13 21 34 ...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int a=0;
    int b=1;
    int sum=1;
    cout<<a<<" "<<b;
    for(int i=1; i<=n;i++){
        int nextNumber=a+b;
        a=b;
        b=nextNumber;
        cout<<" "<<nextNumber<<" ";
        //for addition of the fibonaci number
        sum =sum+nextNumber;
        
    }
    cout<<endl;
    cout<<sum<<endl;
}