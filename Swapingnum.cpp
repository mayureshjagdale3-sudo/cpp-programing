#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a and b";
    cin>> a >> b;
    c=a;
    a=b;
    b=c;
    cout<<"the value of a and b after swapping is"<<a<<b<<endl;
    return 0;

}