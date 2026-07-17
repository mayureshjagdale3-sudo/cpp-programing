#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the vlalue of a and b";
    cin>> a >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swapping value of a = "<<a<<endl;
    cout<<"Swapping value of b = "<<b<<endl;
    return 0;

}