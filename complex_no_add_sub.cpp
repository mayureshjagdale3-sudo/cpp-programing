#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:

    void input()
    {
        cin >> real >> img;
    }

    void display()
    {
        cout << real << " + " << img << "i";
    }

    Complex add(Complex a2)
    {
        Complex a3;

        a3.real = real + a2.real;
        a3.img = img + a2.img;

        return a3;
    }

    Complex sub(Complex a2)
    {
        Complex a3;

        a3.real = real - a2.real;
        a3.img = img - a2.img;

        return a3;
    }
};

int main()
{
    Complex a1, a2, a3;

    cout << "Enter first complex number: ";
    a1.input();

    cout << "Enter second complex number: ";
    a2.input();

    a3 = a1.add(a2);

    cout << "Addition = ";
    a3.display();

    cout << endl;

    a3 = a1.sub(a2);

    cout << "Subtraction = ";
    a3.display();

    return 0;
}