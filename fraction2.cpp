#include<iostream>
using namespace std;

class fraction
{
    int num, den;

public:
    void getdata()
    {
        cout << "Enter Numerator and Denominator : ";
        cin >> num >> den;
    }

    void add(fraction f1, fraction f2)
    {
        num = (f1.num * f2.den) + (f2.num * f1.den);
        den = f1.den * f2.den;

        cout << "Addition = " << num << "/" << den << endl;
    }

    void sub(fraction f1, fraction f2)
    {
        num = (f1.num * f2.den) - (f2.num * f1.den);
        den = f1.den * f2.den;

        cout << "Subtraction = " << num << "/" << den << endl;
    }
};

int main()
{
    fraction f1, f2, f3;

    cout << "Enter First Fraction" << endl;
    f1.getdata();

    cout << "Enter Second Fraction" << endl;
    f2.getdata();

    f3.add(f1, f2);
    f3.sub(f1, f2);

    return 0;
}