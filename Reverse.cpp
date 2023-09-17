#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cout<<"ENter the number."<<endl;
    cin>>n;
    int digit;
    int Reverse=0;
    //int i=0;
    int INT_MAX, INT_MIN;

    while(n!=0){
        digit=n%10;
        Reverse= Reverse*10 + digit;
       //Reverse=(Reverse * pow (10, i)) + digit;
        //i++;
        n=n/10;

       /* if((Reverse > INT_MAX/10) || (Reverse < INT_MIN/10)){
            cout<<" 0"<<endl;
        } */    // IT is a exception case in LEEtcode

    }
    cout<<Reverse<<endl;
}