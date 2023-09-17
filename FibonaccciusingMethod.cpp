#include<iostream>
using namespace std;
void fibonaci(int n){
    int a=0;
    int b=1;
    int nextnumber;
    int sum=1;
    int multi=1;
   for(int i=0;i<=n;i++){
        nextnumber=a+b;
        a=b;
        b=nextnumber;
        sum=sum+nextnumber;
        multi=multi*nextnumber;
        cout<<" "<<nextnumber<<" ";


    }
    cout<<endl;
    cout<<"The last digit of the fibonacci series are = "<<nextnumber<<endl;
    cout<<endl;
    cout<<"The sum of the fibonacci series are = "<<sum<<endl;
    cout<<"The multiplication of the the fibonacci serues sre = "<<multi<<endl;

    
       

}

int main(){
    int n;
    int a=0;
    int b=1;
    cout<<"Enter the number = ";
    cin>>n;
    cout<<"The fibonacci series are mentioned below "<<endl;
    cout<<a<<" ";
    cout<<b<<" ";
    fibonaci(n);


}