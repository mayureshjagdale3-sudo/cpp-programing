#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    if (ch>='a' && ch<='z')
    {
        cout<<"The character is in lower case"<<endl;
    }else if (ch>='A' && ch<='Z')
    {
        cout<<"The character is in upper case"<<endl;
    }else
    {
        cout<<"the character is not an alphabet"<<endl;

    }
    return 0;
}