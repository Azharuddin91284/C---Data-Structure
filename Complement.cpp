#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the number."<<endl;
    cin>>n;
    int m = n;
    int ans;
    int mask = 0;

    // This is the Eadge case of the problem according to Leetcode thank you dear
    if(n == 0){
        cout<< 1 <<endl;
    }
    while(m!=0){
        mask=(mask << 1) | 1;
        m = m >> 1;
        

    }
    ans=(~n) & mask;
    cout<<ans<<endl;
}