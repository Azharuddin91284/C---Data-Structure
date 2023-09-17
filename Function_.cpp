// finding power of any given positive  number using method and use power(a,b) method  which takes ans=ans*a(power of which value).
// besically function is used to reuse the code in multiple types so there is no need to write large line og code again and agai

#include<iostream>
using namespace std;



int power(){
    int x,y;
    cout<<"Enter the value of x = ";
    cin>>x;
    cout<<"Enter the value of y = ";
    cin>>y;
    int ans=1;
    
    for(int i=1;i<=y;i++){
        ans=ans*x;
        //cout<<"Answer = "<<ans<<endl;

    }
    
    return ans;

}
int main(){
    //int a,b;
    //cout<<"Enter the value of a = ";
    //cin>>a;
   // cout<<"Enter the value of b = ";
   // cin>>b;
    
   int ans= power();
   cout<<"Answer = "<<ans<<endl;

   int ans_= power();
   cout<<"Answer = "<<ans_<<endl;

   int ans_1= power();
   cout<<"Answer = "<<ans_1<<endl;

   int ans_2= power();
   cout<<"Answer = "<<ans_2<<endl;

   int ans_3= power();
   cout<<"Answer = "<<ans_3<<endl;

   int ans_4= power();
   cout<<"Answer = "<<ans_4<<endl;

   int ans_5= power();
   cout<<"Answer = "<<ans_5<<endl;

  /* int ans_= power(a,b);
   cout<<"Answer = "<<ans_<<endl;

   int ans_1= power(a,b);
   cout<<"Answer = "<<ans_1<<endl;

   int ans_2= power(a,b);
   cout<<"Answer = "<<ans_2<<endl;
*/
   
   return 0;
    
}