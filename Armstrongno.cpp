#include<iostream>
using namespace std;

int main()
{
    int num, original ,sum =0 , rem;
    cout<<"enter a number: ";
    cin>>num;
    original=num;
    while(num!=0)
    {
        rem=num%10;
        sum = sum + (rem*rem*rem);
        num=num/10;
    }
    if(sum==original)
    {
        cout<<"The number is an Armstrong number."<<endl;
    }
    else
    {
        cout<<"The number is not an Armstrong number."<<endl;

    }
    }
