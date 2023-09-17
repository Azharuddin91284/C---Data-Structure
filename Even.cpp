//5=101,  6=110, 7=111

#include<iostream>
using namespace std;
bool  isEven(int num){
    if(num&1){
        return true;// 1 for odd
        
    }
    return false;// 0 for even
}
int main(){
    int num;
    cout<<"Enter the number = ";
    cin>>num;

    int ans = isEven(num);
    cout<<ans;

}