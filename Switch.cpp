#include<iostream>
using namespace std;
int main(){
    int a,b;
    int n;
    cout<<"Enter the vlaue of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    cout<<"Enter the operstor = ";
    cin>>n;
    switch(n){
        case 1:cout<<" Addition = "<<(a+b);
        break;

        case 2:cout<<"Substraction = "<<(a-b);
        break;

        case 3:cout<<"Multiplication = "<<(a*b);
        break;

        case 4:cout<<"Division = "<<(a/b);
        break;

        case 5:cout<<"Remainder value = "<<(a%b);
        break;

        default: cout<<"Not a valid operator "<<endl;

    }

}