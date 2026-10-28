#include <iostream>
using namespace std;

class Time
{
public:
    int h, m, s;

    void get()
    {
        cout << "Enter time (hours minutes seconds): ";
        cin >> h >> m >> s;
    }

    void add(Time t2)
    {
        int h1, m1, s1;

        s1 = s + t2.s;
        m1 = m + t2.m + s1 / 60;
        s1 = s1 % 60;

        h1 = h + t2.h + m1 / 60;
        m1 = m1 % 60;

        cout << "Addition = " << h1 << " hours "
             << m1 << " minutes "
             << s1 << " seconds" << endl;
    }

    void sub(Time t2)
    {
        int h1, m1, s1;

        h1 = h - t2.h;
        m1 = m - t2.m;
        s1 = s - t2.s;

        if (s1 < 0)
        {
            s1 = s1 + 60;
            m1--;
        }

        if (m1 < 0)
        {
            m1 = m1 + 60;
            h1--;
        }

        cout << "Subtraction = " << h1 << " hours "
             << m1 << " minutes "
             << s1 << " seconds" << endl;
    }
};

int main()
{
    Time t1, t2;

    cout << "First time\n";
    t1.get();

    cout << "Second time\n";
    t2.get();

    t1.add(t2);
    t1.sub(t2);

    return 0;
}