#include <iostream>
using namespace std;

class Fraction
{
public:

    int num, den;

    void input()
    {
        cin >> num >> den;
    }

    Fraction add(Fraction f2)
    {
        Fraction temp;

        temp.num = (num * f2.den) + (f2.num * den);
        temp.den = den * f2.den;

        return temp;
    }

    Fraction sub(Fraction f2)
    {
        Fraction temp;

        temp.num = (num * f2.den) - (f2.num * den);
        temp.den = den * f2.den;

        return temp;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction a1, a2, result;

    cout << "Enter first fraction (numerator denominator): ";
    a1.input();

    cout << "Enter second fraction (numerator denominator): ";
    a2.input();

    result = a1.add(a2);

    cout << "Addition = ";
    result.display();

    result = a1.sub(a2);

    cout << "Subtraction = ";
    result.display();

    return 0;
}