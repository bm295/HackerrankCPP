#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    vector<int> v;
    int queries[q];

    cin >> n;   
    for(int i = 0; i < n; i++) {
        int number;
        cin >> number;
        v.push_back(number);
    }
    cin >> q;
    
    vector<int>::iterator low;
    for(int i = 0; i < q; i++) {
        int query;
        cin >> query;
        low = lower_bound(v.begin(), v.end(), query);
        if (v.at(low - v.begin()) == query) {
            cout << "Yes ";
        }
        else {
            cout << "No ";
        }
        cout << (low - v.begin()) + 1 << endl;
    }
    return 0;
}
