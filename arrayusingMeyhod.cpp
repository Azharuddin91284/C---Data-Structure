#include<iostream>
using namespace std;
void array(int arr[], int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i];


    }
}

int main(){
    //int n=15;
    int n=3;
    int p[20]={1,4,6,9};
    // using indexing to check the value of array element
    cout<<p[1]<<endl;
    cout<<p[0]<<endl;
    
    cout<<"PRint the array here "<<endl;
    array(p, 20);
    
    
    cout<<endl;




    int m=10;
    int q[20]={1,9,4,9};
    // using indexing to check the value of array element
    cout<<q[1]<<endl;
   
    cout<<"PRint the array here "<<endl;
    array(q,20);
    
    cout<<endl;

    int c=20;
    int g[30]={1};
    // using indexing to check the value of array element
    cout<<g[1]<<endl;
    
    cout<<"PRint the array here "<<endl;
    array(g,30);
    


    cout<<endl;
    int n_=40;
    int p_[50]={1};
    // using indexing to check the value of array element
    cout<<p_[1]<<endl;
    
    cout<<"PRint the array here "<<endl;
    array(p_,50);
    




}