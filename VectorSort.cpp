#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int input;
    vector<int> vectors;
    while (cin >> input) {
        vectors.push_back(input);
    }
    sort(vectors.begin(), vectors.end());
    for (int i = 0; i < n; i++) {
        cout << vectors.at(i) << (i < n - 1 ? " " : "");
    }
    return 0;
}
