#include <iostream>
#include <cstdio>
using namespace std;

void showEvenOdd(int x);
void showNumber(int x);

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    
    for (int i = a; i <= b; i++)
    {
        if (i > 9)
            showEvenOdd(i);
        else
            showNumber(i);
    }
    
    // Complete the code.
    return 0;
}

void showEvenOdd(int x)
{
    if (x % 2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
}

void showNumber(int x)
{
    switch(x) {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
    }
}
