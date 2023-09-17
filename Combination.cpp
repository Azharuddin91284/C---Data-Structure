#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
       fact=fact*i;
       

    }
    return fact;
}

int nCr(int n,int r){
    int numerator=factorial(n);
    int denominator=(factorial(r)*factorial(n-r));

    int combination=numerator/denominator;
    return combination;


}

int main(){
    int n ,r;
    cout<<"Enter the value of n = ";
    cin>>n;
    cout<<"Enter the value of r = ";
    cin>>r;

    int ans=factorial(n);
    int ans_=factorial(r);
    int ans_1=nCr(n,r);

    cout<<"Permutation of n= "<<ans<<endl;
    cout<<"permutation of r = "<<ans_<<endl;
    cout<<"Combination of n = "<<ans_1<<endl;
    
    return 0;
    
}