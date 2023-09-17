/*#include<iostream>
using namespace std;
int update(int n){
    int ans = n*n;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number.";
    cin>>n;

    n=update(n);
    cout<< n <<endl;
    return 0;
}
*/
/*#include<iostream>
using namespace std;
void update(int n){
    //n= n*n;
    n=n/2;
}
int main(){
    int n;
    cout<<"Enter the number.";
    cin>>n;

    update(n);
    cout<< n <<endl;
}
*/

#include<iostream>
using namespace std;
int update(int n){
    n = n*n;
    return n;
}
int main(){
    int n;
    cout<<"Enter the number.";
    cin>>n;
    //update(n)
    n=update(n);
    cout<< n <<endl;
    return 0;
}