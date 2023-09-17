// finding power of any given positive  number using method and use power(a,b) method  which takes ans=ans*a(power of which value).

// besically function is used to reuse the code in multiple types so there is no need to write large line og code again and again

#include<iostream>
using namespace std;
int a,b;


int power(int a,int b){
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    int ans=1;
    
    for(int i=1;i<=b;i++){
        ans=ans*a;
        //cout<<"Answer = "<<ans<<endl;

    }
    cout<<"Answer = "<<ans<<endl;
    return 0;

}
int main(){
    
   int ans= power(a,b);
   
   return ans;
    
}

/*// finding power of any given positive  number using method and use power(a,b) method  which takes ans=ans*a(power of which value).

#include<iostream>
using namespace std;



int power(int a,int b){
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    int ans=1;
    
    for(int i=1;i<=b;i++){
        ans=ans*a;
        //cout<<"Answer = "<<ans<<endl;

    }
    
    return ans;

}
int main(){
    int a,b;
    //cout<<"Enter the value of a = ";
    //cin>>a;
   // cout<<"Enter the value of b = ";
   // cin>>b;
    
   int ans= power(a,b);
   cout<<"Answer = "<<ans<<endl;
   
   return 0;
    
}*/