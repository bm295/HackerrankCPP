#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    map<string, int> m;
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        string k;
        int d;
        map<string, int>::iterator it;
        switch(x) {
            case 1:
                cin >> k >> d;
                it = m.find(k);
                if (it != m.end()) {
                    m[k] += d;
                }
                else {
                    m.insert(make_pair(k, d));
                }                
                break;
            case 2:
                cin >> k;
                m.erase(k);
                break;
            case 3:
                cin >> k;
                it = m.find(k);
                cout << (it != m.end() ? m[k] : 0) << endl;
                break;
        }
    }
    return 0;
}
