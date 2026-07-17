#include<iostream>
using namespace std;
int main()
{
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
    cout << "Area of the circle: " <<area <<endl;
    cout << "circumference of the circle: " <<circumference <<endl;
    return 0;
}