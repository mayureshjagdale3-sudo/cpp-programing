#include<iostream>
using namespace std;

int main()
{
int num, original , rev =0, rem;
cout<<"enter a number; ";
cin>>num;
original=num;
while(num!=0)
{
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
    
}
if(original==rev)
{
    cout<<"The number is a palindrome."<<endl;
}
else
{
    cout<<"The number is not a palindrome."<<endl;
}
}