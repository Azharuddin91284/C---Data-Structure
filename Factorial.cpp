#include<iostream>
using namespace std;
/*  int main(){
    int n;
    cout<<"Enter the integer for finding factorial = ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<"Factorial of the given number = "<<fact<<endl;

    }
    cout<<endl<<endl;
    cout<<"factorial = "<<fact;
    
}  
*/

int factorial(int num){
    cout<<"Enter the numbner = ";
    cin>>num;
    int fact=1;
    for(int i=1;i<=num;i++){
       fact=fact*i;
    }
    return fact;

}
int main(){
    int num;
    int ans=factorial(num);
    cout<<"Factorial of the given number = "<<ans;
    return 0;
    
}