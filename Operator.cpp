#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=2;
    int b=3;
    cout << a/b<<endl;//    integer/integer=interger  a/b=0;
    //     float/int=float   , float/float=float, float/double=double, double/float=double;


    float f=4.0;
    int n=3;
    cout <<f/n<<endl;
    cout <<2.0/5<<endl;

    //arithmetic operator +,-,*,/;
    //Relational operator ==,<=,>=,<,>,!=
    //Loggical operator &&,||,!
    //Boolean operator True=1, flase=0

    int p;
    int q;
    cout <<"Enter the value of p:";
    cin >>p;
    cout <<"Enter the value of q:";
    cin >>q;
    if(p<=q){
        cout <<"True"<<endl;
    }else{
        cout <<"False"<<endl;
    }
    bool first = (p==q);
    cout <<first<<endl;// true for 1 & false for 0

    bool second = (p>q);//0 falssssssse
    cout <<second<<endl;

    bool third = (p<q);//1 true
    cout <<third<<endl;

    bool fourth = (p<=q);//1 true
    cout <<fourth<<endl;

    bool fifth = (p>=q);//0 false
    cout <<fifth<<endl;

    bool sixth = (p!=q);//1 true
    cout <<sixth<<endl;
    cout <<endl;

    int c=0;
    cout <<!c<<endl;
   



}