#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;//rectangle area formula
    perimeter = 2 * (length + width);//rectangle perimeter formula

    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}