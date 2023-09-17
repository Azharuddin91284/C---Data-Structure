//Type casting means change of one type to another type;
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a='a';// here 'a' character is typecast into int a; which is 97
    int e='b';//here 'b' character is typecast into int e; which is 98
    char d=97;//here '97' integer is typecast into char d; which is a
    char f=123456;//here '123456' interger is typecast into int f; which is @
    char p=-97;//here '-97' integer is typecast into char p; which is f
    char v=-98;//here '-98' integer is typecast into char v; which is Rs
    char s=-123456;//here '-123456' integer is typecast into char s; which is L


    cout <<a<<endl;
    cout <<e<<endl;
    cout <<d<<"\n";
    cout <<f<<endl;
    cout <<p<<endl;
    cout <<v<<endl;
    cout <<s<<endl;
    cout <<"\n";

    int p_=-34;//signed
    int q=32;//signed
    cout <<p_+q<<endl;
    cout <<endl;

    unsigned int w=112;//positive starting bit 0 // 0000 0000 0010 1101 like this stored
    // unsigned only stored positive number not a negative number in case of negative number see below line of code:
    unsigned int x=-112;//negative starting bit 1  // 1111 1111 111 1011 like this stored
    signed int y=-112;
    signed int z=112;
    cout <<w<<endl;
    cout <<x<<endl;
    cout <<y<<endl;
    cout <<z<<endl;
}
