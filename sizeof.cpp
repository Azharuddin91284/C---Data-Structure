#include <iostream>
using namespace std;
int main(){ 
    cout << "Namaste Duniya" << endl;
    cout << "HIi Azharuddin\n" ;
    cout << "Welcome to C++"<<"\n";
    cout <<"HEllo mister";
    cout <<"\n";

    int azz=234;//4 byte
    string a_="Azharuddin ansari";//24 byte
    char z='a';//1 byte
    bool b=true;//1 bit
    float f=2.4;//4 byte
    double d=3.55;//8 byte
    int az_=-98;

    int size= sizeof(azz);
    int size_=sizeof(a_);
    int size1=sizeof(z);
    int size2=sizeof(b);
    int size3=sizeof(f);
    int size4=sizeof(d);
    int size5=sizeof(az_);
    
    cout <<size<<endl;
    cout <<size_<<endl;
    cout <<size1<<endl;
    cout <<size2<<endl;
    cout <<size3<<endl;
    cout <<size4<<endl;
    cout <<size5<<endl;
}