#include <iostream>
using namespace std;

class Time
{
public:

 int hr, min, sec;
    void input()
    {
        cin >> hr >> min >> sec;
    }
    Time add(Time t2)
    {
        Time temp;
        temp.sec = sec + t2.sec;
        temp.min = min + t2.min;
        temp.hr = hr + t2.hr;

        if(temp.sec >= 60)
        {
            temp.sec = temp.sec - 60;
            temp.min++;
        }

        if(temp.min >= 60)
        {
            temp.min = temp.min - 60;
            temp.hr++;
        }

        return temp;
    }
    void display()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};
int main()
{
    Time t1, t2, result;
    cout << "Enter first time (HH MM SS): ";
    t1.input();
    cout << "Enter second time (HH MM SS): ";
    t2.input();
    result = t1.add(t2);
 cout << "Total time = ";
result.display();

    return 0;
}