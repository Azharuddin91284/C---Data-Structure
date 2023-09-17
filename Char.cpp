#include <iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enterb the character:"<<endl;
    cin >>ch;
    if(ch>='a' && ch<='z' , ch=ch+'a'){
        cout <<"character is belonging to lower case of alphabet(a-z)"<<endl;
    }
    else if(ch>='A' && ch<='Z', ch=ch+'A'){
        cout <<"character is belonging to upper case of alphabet(A-Z)"<<endl;
    }
    else{
        cout <<"character is not belonging to upper and lower case of alphabet:"<<"\n";
    }

}