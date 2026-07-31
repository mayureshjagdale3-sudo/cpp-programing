#include <iostream>
using namespace std;

int main()
{
    int choice, n, num, rem, rev, sum, original, i;

    cout << "1. Sum of N Natural Numbers" << endl;
    cout << "2. Reverse Number" << endl;
    cout << "3. Palindrome Number" << endl;
    cout << "4. Armstrong Number" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter N: ";
            cin >> n;
            sum = 0;
            for(i = 1; i <= n; i++)
                sum = sum + i;
            cout << "Sum = " << sum;
            break;

        case 2:
            cout << "Enter a number: ";
            cin >> num;
            rev = 0;
            while(num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }
            cout << "Reverse = " << rev;
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> num;
            original = num;
            rev = 0;
            while(num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
            }
            if(original == rev)
                cout << "Palindrome Number";
            else
                cout << "Not Palindrome Number";
            break;

        case 4:
            cout << "Enter a number: ";
            cin >> num;
            original = num;
            sum = 0;
            while(num != 0)
            {
                rem = num % 10;
                sum = sum + (rem * rem * rem);
                num = num / 10;
            }
            if(sum == original)
                cout << "Armstrong Number";
            else
                cout << "Not Armstrong Number";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}