#include<iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "Enter Real and Imaginary Part : ";
        cin >> real >> img;
    }

    void add(complex c1, complex c2)
    {
        real = c1.real + c2.real;
        img = c1.img + c2.img;

        cout << "Addition = " << real << " + " << img << "i" << endl;
    }

    void sub(complex c1, complex c2)
    {
        real = c1.real - c2.real;
        img = c1.img - c2.img;

        cout << "Subtraction = " << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    cout << "Enter First Complex Number" << endl;
    c1.getdata();

    cout << "Enter Second Complex Number" << endl;
    c2.getdata();

    c3.add(c1, c2);
    c3.sub(c1, c2);

    return 0;
}