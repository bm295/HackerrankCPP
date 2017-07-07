#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;
    
    cin >> a >> b >> c >> d >> e >> f;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout.setf(ios::fixed);
    cout << setprecision(3) << e << endl;
    cout << setprecision(9) << f << endl;
    // Complete the code.
    return 0;
}
